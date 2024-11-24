#include "ProfileController.h"
#include "../model/DatabaseManager.h"
#include <iostream>
#include <sqlite3.h>

bool ProfileController::updateProfile(int userId, const std::string& name, const std::string& bio, const std::string& profilePicture) {
    sqlite3* db = DatabaseManager::getInstance().getDB();
    sqlite3_stmt* stmt;

    // SQL 更新语句
    const char* sql = R"(
        UPDATE ProfileTable
        SET Name = ?, Bio = ?, Profile_picture = ?
        WHERE User_id = ?;
    )";

    // 预编译 SQL 语句
    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "Unable to precompile SQL statements that update profiles: " << sqlite3_errmsg(db) << std::endl;
        return false;
    }

    // 绑定参数
    sqlite3_bind_text(stmt, 1, name.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 2, bio.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 3, profilePicture.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_int(stmt, 4, userId);

    // 执行更新操作
    if (sqlite3_step(stmt) != SQLITE_DONE) {
        std::cerr << "Error updating Profile: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_finalize(stmt);
        return false;
    }

    // 释放资源
    sqlite3_finalize(stmt);
    std::cout << "The User Profile (User ID) is successfully updated: " << userId << ")" << std::endl;

    return true;
}
