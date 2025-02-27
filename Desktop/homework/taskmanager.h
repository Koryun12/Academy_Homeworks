#pragma once
#include <vector>
#include "user.h"
#include "task.h"

class TaskManager {
private:
    std::vector<User*> m_users;         // All users
    std::vector<Task*> m_all_tasks;     // All tasks

public:
    TaskManager();
    ~TaskManager();

    void register_user(const std::string& name, const std::string& passwd);
    User* login(const std::string& name, const std::string& passwd);
    void logout(User* user);

    void add_task(const std::string& uid, const std::string& title, 
                  const std::string& description, const std::string& deadline, 
                  const std::string& category, int prio, int status);
    void delete_task(const std::string& uid, const std::string& task_id);
    void edit_task(const std::string& uid, const std::string& task_id, const Task& new_task);
    void display_task(const std::string& uid, const std::string& task_id) const;
};
