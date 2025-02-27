#pragma once
#include <string>
#include <vector>
#include "task.h"

class User {
private:
    std::string m_id;
    std::string m_name;
    std::string m_passwd;
    std::vector<Task*> m_tasks;
    bool is_logged;

public:
    User(const std::string& id, const std::string& name, const std::string& passwd);
    User(const User& other);
    User(User&& other) noexcept;
    ~User();

    void add_task(Task* task);
    void delete_task(const std::string& task_id);
    void edit_task(const std::string& task_id, const Task& new_task);
    std::vector<Task*> list_tasks() const;
    Task* search_task(const std::string& task_id) const;

    bool login(const std::string& password);
    void logout();
};
