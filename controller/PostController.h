// 查询好友的帖子，以及post 新帖子

#pragma once
#include <vector>
#include <string>



class PostController {
public:
    std::vector<std::vector<std::string>> getFriendPosts(int userId);  // 查询好友帖子的方法
    std::vector<std::string> getUserPosts(int userId);
    int likePost(int postId, int userId);
    void printPost(int postId);
    int getLikes(int postId);
};
