// UserModel.h is used to create account
#pragma once
#include <string>

class UserModel {
public:
    void insertUser(const std::string& username, const std::string& password, const std::string& email);
};
