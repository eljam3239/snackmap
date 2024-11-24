#include "PostModel.h"
#include "DatabaseManager.h"
#include <iostream>
#include "../lib/sqlite3.h"

//Constructor

PostModel::PostModel(sqlite3 *db) {
    this->db = db;
}

//Destructor
PostModel::~PostModel() {
    // do nothing
}

void PostModel::createPost(const std::string& content, const std::string& title, int userId, const std::string& postTime, const std::string& author) {
    std::string sql = "INSERT INTO Post (Content, Title, UserId, PostTime, Author) VALUES (?, ?, ?, ?, ?);";
    sqlite3_stmt* stmt;
    if (sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "Failed to prepare statement: " << sqlite3_errmsg(db) << std::endl;
        return;
    }
    sqlite3_bind_text(stmt, 1, title.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 2, content.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 3, author.c_str(), -1, SQLITE_STATIC);

    if (sqlite3_step(stmt) != SQLITE_DONE) {
        std::cerr << "Insertion failed: " << sqlite3_errmsg(db) << std::endl;
    } else {
        std::cout << "Insertion successful!" << std::endl;
    }
    sqlite3_finalize(stmt);
}
//print post details to console
void PostModel::printPost(int postId) {
    std::string sql = "SELECT title, content, author, timestamp FROM Posts WHERE post_id = ?;";
    sqlite3_stmt* stmt;

    // Prepare the SQL statement
    if (sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "Error preparing statement: " << sqlite3_errmsg(db) << std::endl;
        return;
    }

    // Bind the post ID parameter
    sqlite3_bind_int(stmt, 1, postId);

    // Execute and process the result
    if (sqlite3_step(stmt) == SQLITE_ROW) {
        std::string title = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
        std::string content = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
        std::string author = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
        std::string timestamp = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 3));

        // Print the post's details
        std::cout << "Post ID: " << postId << std::endl;
        std::cout << "Title: " << title << std::endl;
        std::cout << "Content: " << content << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Timestamp: " << timestamp << std::endl;
    } else {
        std::cerr << "No post found with ID " << postId << "." << std::endl;
    }

    // Finalize the statement
    sqlite3_finalize(stmt);
}

std::vector<std::string> PostModel::getUserPosts(int authorId) {
    std::vector<std::string> postContents;

    std::string sql = "SELECT content FROM Posts WHERE author = ?;";
    sqlite3_stmt* stmt;

    // Prepare the SQL statement
    if (sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "Error preparing statement: " << sqlite3_errmsg(db) << std::endl;
        return postContents;
    }

    // Bind the author ID parameter
    sqlite3_bind_int(stmt, 1, authorId);

    // Execute the query and fetch results
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        std::string content = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
        postContents.push_back(content);
    }

    // Finalize the statement
    sqlite3_finalize(stmt);

    return postContents;
}