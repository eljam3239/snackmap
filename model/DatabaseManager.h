#include <string>

class DatabaseManager {
public:
    static DatabaseManager& getInstance();
    bool executeQuery(const std::string& query);
    // Methods to fetch data...
};
