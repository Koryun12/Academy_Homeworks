#include "taskmanager.h"
#include <algorithm>

TaskManager::TaskManager() {}

TaskManager::~TaskManager() {
    for (auto user : m_users) {
        delete user;
    }
    for (auto task : m_all_tasks) {
        delete task;
    }
}

void TaskManager::register_user(const std::string& name, const std::string& passwd) {
    std::string id = "USER_" + std::to_string(m_users.size() + 1);
    User* user = new User(id, name, passwd);
    m_users.push_back(user);
}

User* TaskManager::login(const std::string& name, const std::string& passwd) {
    for (auto user : m_users) {
        if (user->login(passwd)) {
            return user;
        }
    }
    return nullptr;
}

void TaskManager::logout(User* user) {
    user->logout();
}

void TaskManager::add_task(const std::string& uid, const std::string& title, 
                           const std::string& description, const std::string& deadline, 
                           const std::string& category, int prio, int status) {
    std::string task_id = "TASK_" + std::to_string(m_all_tasks.size() + 1);
    Task* task = new Task(task_id, uid, title, description, deadline, category, prio, status);
    m_all_tasks.push_back(task);

    for (auto user : m_users) {
        if (user->search_task(uid)) {
            user->add_task(task);
        }
    }
}

void TaskManager::delete_task(const std::string& uid, const std::string& task_id) {
    auto it = std::remove_if(m_all_tasks.begin(), m_all_tasks.end(),
        [&task_id](Task* task) { return task->get_task_id() == task_id; });
    m_all_tasks.erase(it, m_all_tasks.end());

    for (auto user : m_users) {
        if (user->search_task(uid)) {
            user->delete_task(task_id);
        }
    }
}

void TaskManager::edit_task(const std::string& uid, const std::string& task_id, const Task& new_task) {
    for (auto task : m_all_tasks) {
        if (task->get_task_id() == task_id) {
            *task = new_task;
            break;
        }
    }

    for (auto user : m_users) {
        if (user->search_task(uid)) {
            user->edit_task(task_id, new_task);
        }
    }
}

void TaskManager::display_task(const std::string& uid, const std::string& task_id) const {
    for (const auto& task : m_all_tasks) {
        if (task->get_task_id() == task_id && task->get_uid() == uid) {
            task->display_info();
            break;
        }
    }
}
