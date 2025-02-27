#pragma once
#include <string>

class Task {
private:
    std::string m_task_id;
    std::string m_uid;
    std::string m_title;
    std::string m_description;
    std::string m_deadline;
    std::string m_category;
    int m_prio;                     // Priority (enum)
    int m_status;                   // Status (enum)

public:
    Task(const std::string& task_id, const std::string& uid, const std::string& title, 
         const std::string& description, const std::string& deadline, const std::string& category, 
         int prio, int status);
    Task(const Task& other);        // Copy constructor
    Task(Task&& other) noexcept;    // Move constructor
    ~Task();

    Task& operator=(const Task& other) {
        if (this != &other) {
            m_task_id = other.m_task_id;
            m_uid = other.m_uid;
            m_title = other.m_title;
            m_description = other.m_description;
            m_deadline = other.m_deadline;
            m_category = other.m_category;
            m_prio = other.m_prio;
            m_status = other.m_status;
        }
        return *this;
    }
    void edit(const std::string& title, const std::string& description, 
              const std::string& deadline, const std::string& category, 
              int prio, int status);
    void set_status(int status);
    void set_prio(int prio);
    void display_info() const;
    std::string get_uid() const;
    std::string get_task_id() const;
};
