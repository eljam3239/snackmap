//
// Created by Xinwei Lyu on 2024-10-16.
//
#include "UserController.h"
#include "../model/UserModel.h"
#include <iostream>

void UserController::createUser() {
    std::string username, password, email;

    // get user input
    std::cout << "please enter username: ";
    std::cin >> username;

    std::cout << "Please enter password: ";
    std::cin >> password;

    std::cout << "Please enter email: ";
    std::cin >> email;

    // Using UserModel to insert user data
    UserModel userModel;
    userModel.insertUser(username, password, email);

    std::cout << "User info inserted！" << std::endl;
}
