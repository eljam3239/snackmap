#include <string>

class UserModel {
    public:
        bool authenticator(const std::string& username, const std::string& password) {
        UserProfile getUserProfile(int userID);
        void updatrUserProfile(const UserProfile& userProfile);      
};
