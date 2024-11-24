#pragma once
#include <string>

class LoginController {
public:
    bool login(const std::string& username, const std::string& password); // 用户登录方法
};
