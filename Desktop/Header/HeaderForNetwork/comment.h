#ifndef COMMENT_H
#define COMMENT_H

#include <string>
#include <chrono>
#include <memory>

class Comment {
private:
    std::string id;                  
    std::string postId;              
    std::string commenterUsername;   
    std::string content;            
    std::chrono::system_clock::time_point timestamp; 

public:
    Comment(const std::string& id, const std::string& postId, 
            const std::string& commenterUsername, const std::string& content);

    std::string getId() const;
    std::string getPostId() const;
    std::string getCommenterUsername() const;
    std::string getContent() const;
    std::string getTimestamp() const;


    static std::shared_ptr<Comment> createComment(const std::string& id, const std::string& postId,
    const std::string& commenterUsername, const std::string& content);
};

#endif 
