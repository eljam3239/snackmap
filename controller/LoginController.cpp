#include "LoginController.h"
#include "../model/DatabaseManager.h"
#include <iostream>
#include <sqlite3.h>

bool LoginController::login(const std::string& username, const std::string& password) {
    sqlite3* db = DatabaseManager::getInstance().getDB();
    sqlite3_stmt* stmt;

    // SQL 查询语句
    const char* sql = R"(
        SELECT 1 FROM User
        WHERE Username = ? AND Password = ?;
    )";

    // 预编译 SQL 语句
    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "The SQL statement for login authentication cannot be precompiled: " << sqlite3_errmsg(db) << std::endl;
        return false;
    }

    // 绑定用户名和密码
    sqlite3_bind_text(stmt, 1, username.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 2, password.c_str(), -1, SQLITE_STATIC);

    // 执行查询
    bool isAuthenticated = (sqlite3_step(stmt) == SQLITE_ROW);

    // 释放资源
    sqlite3_finalize(stmt);

    if (isAuthenticated) {
        std::cout << "Login successful! welcome，" << username << "！" << std::endl;
    } else {
        std::cerr << "Login failure: The user name or password is incorrect." << std::endl;
    }

    return isAuthenticated;
}
