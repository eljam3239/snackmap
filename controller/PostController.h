// 查询好友的帖子，以及post 新帖子

#pragma once
#include <vector>
#include <string>

class PostController {
public:
    std::vector<std::string> getFriendPosts(int userId); // 查询好友帖子的方法
};
