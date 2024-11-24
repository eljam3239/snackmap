#pragma once
#include <string>

class ProfileController {
public:
    bool updateProfile(int userId, const std::string& name, const std::string& bio, const std::string& profilePicture);
};
