#include <vector>
class PostController {
public:
    void createPost(const Post& post);
    std::vector<Post> fetchPosts();
};
