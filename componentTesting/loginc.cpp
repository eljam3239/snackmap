#include <iostream>
#include <sqlite3.h>
#include <openssl/sha.h>

std::string hashPassword(const std::string& password) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, password.c_str(), password.size());
    SHA256_Final(hash, &sha256);
    std::stringstream ss;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }
    return ss.str();
}

int main() {
    sqlite3* db;
    int rc = sqlite3_open("users.db", &db);
    if (rc) {
        std::cerr << "Can't open database: " << sqlite3_errmsg(db) << std::endl;
        return 1;
    }

    std::string createTableQuery = "CREATE TABLE IF NOT EXISTS users ("
                                   "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                                   "username TEXT UNIQUE NOT NULL, "
                                   "password_hash TEXT NOT NULL);";

    rc = sqlite3_exec(db, createTableQuery.c_str(), 0, 0, nullptr);
    if (rc != SQLITE_OK) {
        std::cerr << "SQL error: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
        return 1;
    }

    std::string username = "user1";
    std::string password = "password123";
    std::string hashedPassword = hashPassword(password);

    std::string insertQuery = "INSERT INTO users (username, password_hash) VALUES ('" + username + "', '" + hashedPassword + "');";

    rc = sqlite3_exec(db, insertQuery.c_str(), 0, 0, nullptr);
    if (rc != SQLITE_OK) {
        std::cerr << "SQL error: " << sqlite3_errmsg(db) << std::endl;
    } else {
        std::cout << "User stored successfully." << std::endl;
    }

    sqlite3_close(db);
    return 0;
}
