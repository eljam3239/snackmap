//
// Created by Xinwei Lyu on 2024-11-24.
//


#include "./model/DatabaseManager.h"
#include <iostream>
#include <sqlite3.h>

void DatabaseManager::insertSampleData() {
    sqlite3* db = getDB();
    char* errorMessage = nullptr;

    // Insert data into User table
    const char* insertUsers = R"(
        INSERT INTO User (Username, Password, Email)
        VALUES
        ('Alice', 'password123', 'alice@example.com'),
        ('Bob', 'password456', 'bob@example.com'),
        ('Charlie', 'password789', 'charlie@example.com');
    )";

    // Insert data into ProfileTable
    const char* insertProfiles = R"(
        INSERT INTO ProfileTable (User_id, Name, Bio, Profile_picture)
        VALUES
        (1, 'Alice', 'Loves programming', '/images/alice.png'),
        (2, 'Bob', 'Enjoys hiking', '/images/bob.png'),
        (3, 'Charlie', 'Avid reader', '/images/charlie.png');
    )";

    // Insert data into Posts table
    const char* insertPosts = R"(
        INSERT INTO Posts (User_id, Title, Content, Image_path)
        VALUES
        (1, 'My First Post', 'Hello, this is Alice!', '/images/post1.png'),
        (2, 'Hiking Adventures', 'Check out my hiking trip!', '/images/hiking.png'),
        (3, 'Favorite Books', 'Sharing my favorite books.', '/images/books.png');
    )";

    // Insert data into Friends table
    const char* insertFriends = R"(
        INSERT INTO Friends (User_id, Friend_id)
        VALUES
        (1, 2), -- Alice and Bob are friends
        (2, 3), -- Bob and Charlie are friends
        (3, 1); -- Charlie and Alice are friends
    )";

    // Execute insertion for User table
    if (sqlite3_exec(db, insertUsers, nullptr, nullptr, &errorMessage) != SQLITE_OK) {
        std::cerr << "Error inserting User data: " << errorMessage << std::endl;
        sqlite3_free(errorMessage);
    }

    // Execute insertion for ProfileTable
    if (sqlite3_exec(db, insertProfiles, nullptr, nullptr, &errorMessage) != SQLITE_OK) {
        std::cerr << "Error inserting ProfileTable data: " << errorMessage << std::endl;
        sqlite3_free(errorMessage);
    }

    // Execute insertion for Posts table
    if (sqlite3_exec(db, insertPosts, nullptr, nullptr, &errorMessage) != SQLITE_OK) {
        std::cerr << "Error inserting Posts data: " << errorMessage << std::endl;
        sqlite3_free(errorMessage);
    }

    // Execute insertion for Friends table
    if (sqlite3_exec(db, insertFriends, nullptr, nullptr, &errorMessage) != SQLITE_OK) {
        std::cerr << "Error inserting Friends data: " << errorMessage << std::endl;
        sqlite3_free(errorMessage);
    }

    std::cout << "Sample data insertion complete!" << std::endl;
}
