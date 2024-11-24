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