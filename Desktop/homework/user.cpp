#include "user.h"
#include "task.h"
#include <algorithm>

User::User(const std::string& id, const std::string& name, const std::string& passwd)
    : m_id(id), m_name(name), m_passwd(passwd), is_logged(false) {}

User::User(const User& other)
    : m_id(other.m_id), m_name(other.m_name), m_passwd(other.m_passwd),
      m_tasks(other.m_tasks), is_logged(other.is_logged) {}

User::User(User&& other) noexcept
    : m_id(std::move(other.m_id)), m_name(std::move(other.m_name)),
      m_passwd(std::move(other.m_passwd)), m_tasks(std::move(other.m_tasks)),
      is_logged(other.is_logged) {
    other.is_logged = false;
}

User::~User() {}

void User::add_task(Task* task) {
    m_tasks.push_back(task);
}

void User::delete_task(const std::string& task_id) {
    auto it = std::remove_if(m_tasks.begin(), m_tasks.end(),
        [&task_id](Task* task) { return task->get_task_id() == task_id; });
    m_tasks.erase(it, m_tasks.end());
}

void User::edit_task(const std::string& task_id, const Task& new_task) {
    for (auto& task : m_tasks) {
        if (task->get_task_id() == task_id) {
            *task = new_task;
            break;
        }
    }
}

std::vector<Task*> User::list_tasks() const {
    return m_tasks;
}

Task* User::search_task(const std::string& task_id) const {
    for (const auto& task : m_tasks) {
        if (task->get_task_id() == task_id) {
            return task;
        }
    }
    return nullptr;
}

bool User::login(const std::string& password) {
    if (m_passwd == password) {
        is_logged = true;
        return true;
    }
    return false;
}

void User::logout() {
    is_logged = false;
}
