#include "DatabaseManager.h"
#include <sqlite3.h>
#include <iostream>

// 获取 DatabaseManager 单例实例
DatabaseManager& DatabaseManager::getInstance() {
    static DatabaseManager instance;
    return instance;
}

// Constructor: Opens the SQLite database
DatabaseManager::DatabaseManager() {
    // the database path in config file
    int rc = sqlite3_open("/home/eljam3239/repos/snackmap/resources/database.db", &db);
    if (rc) {
        std::cerr << "can't open database: " << sqlite3_errmsg(db) << std::endl;
    }
}

// Destructor: Closes the SQLite database connection
DatabaseManager::~DatabaseManager() {
    sqlite3_close(db);
}

sqlite3* DatabaseManager::getDB() {
    return db;
}

// initialize database ->create required tables
void DatabaseManager::initializeDatabase() {
    cout << "Start initializing database -> create required tables ..." << endl;
    createTables();
}

// create required tables
void DatabaseManager::createTables() {
    cout << "Start creating UserTables ..." << endl;
    const char* createUserTable = R"(
        CREATE TABLE IF NOT EXISTS User (
            User_id INTEGER PRIMARY KEY AUTOINCREMENT,
            Username TEXT NOT NULL,
            Password TEXT NOT NULL,
            Email TEXT NOT NULL,
            Created_at DATETIME DEFAULT CURRENT_TIMESTAMP
        );
    )";
    cout << "Start creating ProfileTable ..." << endl;
    //
    const char* createProfileTable = R"(
        CREATE TABLE IF NOT EXISTS ProfileTable (
            Profile_id INTEGER PRIMARY KEY AUTOINCREMENT,
            User_id INTEGER,
            Name TEXT,
            Bio TEXT,
            Profile_picture TEXT,
            Created_at DATETIME DEFAULT CURRENT_TIMESTAMP,
            FOREIGN KEY (User_id) REFERENCES User (User_id)
        );
    )";
    cout << "Start creating PostsTable ... " << endl;
    const char* createPostsTable = R"(
        CREATE TABLE IF NOT EXISTS Posts (
            Post_id INTEGER PRIMARY KEY AUTOINCREMENT,
            Timestamp DATETIME DEFAULT CURRENT_TIMESTAMP,
            User_id INTEGER,
            Title TEXT,
            Content TEXT,
            Image_path TEXT,
            FOREIGN KEY (User_id) REFERENCES User (User_id)
        );
    )";

    char* errorMessage = nullptr;
    if (sqlite3_exec(db, createUserTable, nullptr, nullptr, &errorMessage) != SQLITE_OK) {
        std::cerr << "error creating User table: " << errorMessage << std::endl;
        sqlite3_free(errorMessage);
    }

    if (sqlite3_exec(db, createProfileTable, nullptr, nullptr, &errorMessage) != SQLITE_OK) {
        std::cerr << "error creating ProfileTable table: " << errorMessage << std::endl;
        sqlite3_free(errorMessage);
    }

    if (sqlite3_exec(db, createPostsTable, nullptr, nullptr, &errorMessage) != SQLITE_OK) {
        std::cerr << "error creating Posts table: " << errorMessage << std::endl;
        sqlite3_free(errorMessage);
    }
}

