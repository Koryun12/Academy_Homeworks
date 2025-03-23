#ifndef NETWORK_H
#define NETWORK_H

#include <string>
#include <unordered_map>
#include <vector>
#include <memory>
#include "User.h"

class Network {
private:
    std::unordered_map<std::string, std::shared_ptr<User>> users; // User registry

public:
    void addUser(std::shared_ptr<User> user);
    std::shared_ptr<User> getUser(const std::string& id) const;

    void sendFriendRequest(const std::string& fromId, const std::string& toId);
    void acceptFriendRequest(const std::string& fromId, const std::string& toId);

};

#endif 
