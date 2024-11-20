#include <iostream>
#include "lib/sqlite3.h"
#include <unistd.h>
#include "model/DatabaseManager.h"
#include "controller/UserController.h"
#include "controller/PostController.h"


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

    // use PostController to get friend posts
    PostController postController;
    int userId = 1; // assume the user id is 1
    std::vector<std::string> friendPosts = postController.getFriendPosts(userId);

    // print friend's post content
    std::cout << "friend's post content:" << std::endl;
    for (const auto& post : friendPosts) {
        std::cout << post << std::endl;
    }


    return 0;
}
