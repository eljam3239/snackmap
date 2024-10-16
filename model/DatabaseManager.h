#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H
#include <map>
#include <sqlite3.h>
#include <string>
using namespace std;

// class DatabaseManager {
// public:
//     // get DatabaseManager instance
//     static DatabaseManager& getInstance();
//
//     // connect to SQLite database
//     static bool connect(const std::string& dbPath);
//
//     // initialize database, create required tables
//     bool initDatabase();
//
//     // execute SQL query
//     bool executeQuery(const std::string& query);
//
//     // close database connection and free dynamic
//     void close();
//
//
//
// private:
//     DatabaseManager() = default; // 私有构造函数
//     sqlite3* db;
//
//
//     // 查询回调函数
//     // static int queryCallback(void* data, int argc, char** argv, char** colName);
//
// };

class DatabaseManager {
public:
    static DatabaseManager& getInstance();
    void initializeDatabase();
    sqlite3* getDB(); // get database instance
private:
    DatabaseManager();
    ~DatabaseManager(); // prevent copying
    DatabaseManager(const DatabaseManager&) = delete;
    DatabaseManager& operator=(const DatabaseManager&) = delete;

    sqlite3* db;
    void createTables();
};


#endif // DATABASEMANAGER_H
