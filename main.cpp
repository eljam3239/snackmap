#include <iostream>
#include <sqlite3.h>
#include <unistd.h>
#include "model/DatabaseManager.h"

int main() {
    char cwd[1024]; // record the current working directory
    if (getcwd(cwd, sizeof(cwd)) != nullptr) {
        std::cout << "当前工作目录: " << cwd << std::endl;
    }
    std::cout << "Start SnackMap ..." << std::endl;

    // 获取数据库管理器的实例并初始化数据库
    DatabaseManager& dbManager = DatabaseManager::getInstance();
    dbManager.initializeDatabase();

    // 输出数据库初始化完成的消息
    std::cout << "Database initialization completed." << std::endl;


    return 0;
}
