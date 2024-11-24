// UserModel.cpp is used to create account

#include "UserModel.h"
#include "DatabaseManager.h"
#include <iostream>
#include "../lib/sqlite3.h"

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

    // 获取新插入的用户 ID
    int userId = sqlite3_last_insert_rowid(db);
    sqlite3_finalize(stmt);

    // 插入对应的用户 ID 到 ProfileTable
    const char* insertProfileSql = R"(
        INSERT INTO ProfileTable (User_id, Name, Bio, Profile_picture)
        VALUES (?, ?, '', '');
    )";


    if (sqlite3_prepare_v2(db, insertProfileSql, -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "Cannot prepare Profile the SQL: " << sqlite3_errmsg(db) << std::endl;
        return ;
    }

    sqlite3_bind_int(stmt, 1, userId);
    sqlite3_bind_text(stmt, 2, username.c_str(), -1, SQLITE_STATIC);

    if (sqlite3_step(stmt) != SQLITE_DONE) {
        std::cerr << "Insert Profile failed: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_finalize(stmt);
        return ;
    }


    // 释放资源
    sqlite3_finalize(stmt);
}
