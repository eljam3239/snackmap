//
// Created by Xinwei Lyu on 2024-11-20.
//

#include "FriendController.h"
#include "FriendController.h"
#include "../model/DatabaseManager.h"
#include <iostream>
#include <sqlite3.h>

bool FriendController::addFriend(int userId, int friendId) {
    sqlite3* db = DatabaseManager::getInstance().getDB();
    sqlite3_stmt* stmt;

    // check if the friend relationship already exists
    const char* checkSql = R"(
        SELECT 1 FROM Friends
        WHERE User_id = ? AND Friend_id = ?;
    )";
    if (sqlite3_prepare_v2(db, checkSql, -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "Cannot precompile SQL statements to check friend relationships: " << sqlite3_errmsg(db) << std::endl;
        return false;
    }

    sqlite3_bind_int(stmt, 1, userId);
    sqlite3_bind_int(stmt, 2, friendId);

    if (sqlite3_step(stmt) == SQLITE_ROW) {
        std::cerr << "The friend relationship already exists！" << std::endl;
        sqlite3_finalize(stmt);
        return false;
    }

    sqlite3_finalize(stmt);

    // 插入好友关系
    const char* insertSql = R"(
        INSERT INTO Friends (User_id, Friend_id)
        VALUES (?, ?);
    )";

    if (sqlite3_prepare_v2(db, insertSql, -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "SQL statements that insert friend relationships cannot be precompiled: " << sqlite3_errmsg(db) << std::endl;
        return false;
    }

    sqlite3_bind_int(stmt, 1, userId);
    sqlite3_bind_int(stmt, 2, friendId);

    if (sqlite3_step(stmt) != SQLITE_DONE) {
        std::cerr << "Error inserting friend relationship: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_finalize(stmt);
        return false;
    }

    sqlite3_finalize(stmt);
    std::cout << "Add friends successfully (User ID: " << userId << ", Friend ID: " << friendId << ")" << std::endl;

    return true;
}
