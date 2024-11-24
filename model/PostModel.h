#include <vector>
#include <string>
#include "../lib/sqlite3.h"





class PostModel {
private:
    sqlite3* db;
public:
    PostModel(sqlite3 *db);
    ~PostModel();
    void createPost(const std::string& content, const std::string& title, 
        int userId, const std::string& postTime, const std::string& author);
    void printPost(const int postId);
    std::vector<std::string> getUserPosts(int userId);
};
