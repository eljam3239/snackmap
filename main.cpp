#include <iostream>
#include <sqlite3.h>
#include <unistd.h>
#include "model/DatabaseManager.h"
#include "controller/UserController.h"

int main() {
    // char cwd[1024]; // record the current working directory
    // if (getcwd(cwd, sizeof(cwd)) != nullptr) {
    //     std::cout << "current working directory: " << cwd << std::endl;
    // }
    // std::cout << "Start SnackMap ..." << std::endl;

    // start
    // initialize database
    DatabaseManager& dbManager = DatabaseManager::getInstance();
    dbManager.initializeDatabase();

    //std::cout << "Database initialization completed." << std::endl;

    // user controller: input username, password, email and insert into database
    UserController userController;
    userController.createUser();

    return 0;
}
