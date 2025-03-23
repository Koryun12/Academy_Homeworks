#ifndef POST_H
#define POST_H

#include <string>
#include <chrono>
#include <memory>

class Post {
private:
    std::string id;                  
    std::string userId;            
    std::string content;            
    std::chrono::system_clock::time_point timestamp; 

public:
    Post(const std::string& id, const std::string& userId, const std::string& content);


    std::string getId() const;
    std::string getUserId() const;
    std::string getContent() const;
    std::string getTimestamp() const;
    static std::shared_ptr<Post> createPost(const std::string& id, const std::string& userId, const std::string& content);
};

#endif 
