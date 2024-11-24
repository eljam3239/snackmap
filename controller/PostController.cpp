#include "PostController.h"
#include "../model/DatabaseManager.h"
#include <iostream>
#include "../lib/sqlite3.h"



std::vector<std::string> PostController::getFriendPosts(int userId) {
    std::vector<std::string> posts;
    sqlite3* db = DatabaseManager::getInstance().getDB();
    sqlite3_stmt* stmt;

    // SQL search statement
    const char* sql = R"(
        SELECT p.Content
        FROM Posts p
        JOIN Friends f ON f.Friend_id = p.User_id
        WHERE f.User_id = ?;
    )";

    // prepare SQL statement
    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "cannot compile SQL: " << sqlite3_errmsg(db) << std::endl;
        return posts;
    }

    // bind parameter
    sqlite3_bind_int(stmt, 1, userId);

    // execute SQL statement
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        const unsigned char* content = sqlite3_column_text(stmt, 0);
        if (content) {
            posts.emplace_back(reinterpret_cast<const char*>(content));
        }
    }

    // finalize statement
    sqlite3_finalize(stmt);

    return posts;
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

int getLikes(int postId) {
    sqlite3* db = DatabaseManager::getInstance().getDB();
    sqlite3_stmt* stmt;

    const char* sql = "SELECT Likes FROM Posts WHERE Post_id = ?;";

    // Prepare the SQL statement
    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "Error preparing statement: " << sqlite3_errmsg(db) << std::endl;
        return -1;
    }

    // Bind the Post ID parameter
    sqlite3_bind_int(stmt, 1, postId);

    // Execute the query and fetch the result
    int likes = -1;
    if (sqlite3_step(stmt) == SQLITE_ROW) {
        likes = sqlite3_column_int(stmt, 0);
    }

    // Finalize the statement
    sqlite3_finalize(stmt);

    return likes;
}