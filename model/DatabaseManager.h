#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H
#include <map>
#include <sqlite3.h>
#include <string>
using namespace std;


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
