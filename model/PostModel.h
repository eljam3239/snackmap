#include <vector>

class PostModel {
public:
    void createPost(const Post& post);
    std::vector<Post> getAllPosts();
};
