#include "PostController.h"
#include "../model/DatabaseManager.h"
#include <iostream>
#include "../lib/sqlite3.h"



std::vector<std::vector<std::string>> PostController::getFriendPosts(int userId) {
    sqlite3* db = DatabaseManager::getInstance().getDB();
    sqlite3_stmt* stmt;
    std::vector<std::vector<std::string>> posts; // List of lists to store post details

    // SQL query with DISTINCT to avoid duplicate posts!!
    const char* sql = R"(
        SELECT DISTINCT p.Post_id, p.Title, p.Content, p.User_id, p.Timestamp
        FROM Posts p
        JOIN Friends f ON f.Friend_id = p.User_id
        WHERE f.User_id = ?;
    )";

    // Prepare the SQL statement
    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "Cannot compile SQL: " << sqlite3_errmsg(db) << std::endl;
        return posts;
    }

    // Bind the user ID parameter
    sqlite3_bind_int(stmt, 1, userId);

    // Execute the query and retrieve the results
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        int postId = sqlite3_column_int(stmt, 0); // Get the post ID
        std::string title = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
        std::string content = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
        std::string author = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 3));
        std::string timestamp = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 4));

        // // Debugging output to track duplicate posts
        // std::cout << "Adding post: " << postId << std::endl;

        // Store the post details in a nested list (list of lists)
        posts.push_back({std::to_string(postId), title, content, author, timestamp});
    }

    // Finalize the statement
    sqlite3_finalize(stmt);

    return posts;
}

//print post details to console
void PostController::printPost(int postId) {

    std::vector<std::string> posts;
    sqlite3* db = DatabaseManager::getInstance().getDB();
    sqlite3_stmt* stmt;

    std::string sql = "SELECT title, content, user_id, timestamp FROM Posts WHERE post_id = ?;";


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

std::vector<std::string> PostController::getUserPosts(int userId) {
    std::vector<std::string> postContents;
    sqlite3* db = DatabaseManager::getInstance().getDB();
    sqlite3_stmt* stmt;

    const char* sql = "SELECT Content FROM Posts WHERE User_id = ?;";

    // Prepare the SQL statement
    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "Error preparing statement: " << sqlite3_errmsg(db) << std::endl;
        return postContents;
    }

    // Bind the User ID parameter
    sqlite3_bind_int(stmt, 1, userId);

    // Execute the query and fetch results
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        const unsigned char* content = sqlite3_column_text(stmt, 0);
        if (content) {
            postContents.emplace_back(reinterpret_cast<const char*>(content));
        }
    }

    // Finalize the statement
    sqlite3_finalize(stmt);

    return postContents;
}
