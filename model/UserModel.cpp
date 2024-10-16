// UserModel.cpp is used to create account

#include "UserModel.h"
#include "DatabaseManager.h"
#include <iostream>
#include <sqlite3.h>

void UserModel::insertUser(const std::string& username, const std::string& password, const std::string& email) {
    sqlite3* db = DatabaseManager::getInstance().getDB();
    sqlite3_stmt* stmt;

    const char* sql = "INSERT INTO User (Username, Password, Email) VALUES (?, ?, ?);";

    // 预编译 SQL 语句
    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "failed to prepare statement: " << sqlite3_errmsg(db) << std::endl;
        return;
    }

    // 绑定参数
    sqlite3_bind_text(stmt, 1, username.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 2, password.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 3, email.c_str(), -1, SQLITE_STATIC);

    // 执行 SQL 语句
    if (sqlite3_step(stmt) != SQLITE_DONE) {
        std::cerr << "insertion failed: " << sqlite3_errmsg(db) << std::endl;
    } else {
        std::cout << "insertion successful！" << std::endl;
    }

    // 释放资源
    sqlite3_finalize(stmt);
}
