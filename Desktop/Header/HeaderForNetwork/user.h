#ifndef USER_H
#define USER_H

#include <string>
#include <memory>

class User {
private:
    std::string id;     
    std::string username; 
    std::string email;   
    std::string description; 

public:
    User(const std::string& id, const std::string& username, 
         const std::string& email, const std::string& description);

    // Getters
    std::string getId() const;
    std::string getUsername() const;
    std::string getEmail() const;
    std::string getDescription() const;

    void setUsername(const std::string& newUsername);
    void setEmail(const std::string& newEmail);
    void setDescription(const std::string& newDescription);

    static std::shared_ptr<User> createUser(const std::string& id, const std::string& username,
    const std::string& email, const std::string& description);
    void deleteUser();
};

#endif 
