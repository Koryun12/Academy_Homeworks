#include "task.h"
#include <iostream>

Task::Task(const std::string& task_id, const std::string& uid, const std::string& title, 
           const std::string& description, const std::string& deadline, const std::string& category, 
           int prio, int status)
    : m_task_id(task_id), m_uid(uid), m_title(title), m_description(description), 
      m_deadline(deadline), m_category(category), m_prio(prio), m_status(status) {}

Task::Task(const Task& other)
    : m_task_id(other.m_task_id), m_uid(other.m_uid), m_title(other.m_title), 
      m_description(other.m_description), m_deadline(other.m_deadline), 
      m_category(other.m_category), m_prio(other.m_prio), m_status(other.m_status) {}

Task::Task(Task&& other) noexcept
    : m_task_id(std::move(other.m_task_id)), m_uid(std::move(other.m_uid)), 
      m_title(std::move(other.m_title)), m_description(std::move(other.m_description)), 
      m_deadline(std::move(other.m_deadline)), m_category(std::move(other.m_category)), 
      m_prio(other.m_prio), m_status(other.m_status) {
    other.m_prio = 0;
    other.m_status = 0;
}

Task::~Task() {}

void Task::edit(const std::string& title, const std::string& description, 
                const std::string& deadline, const std::string& category, 
                int prio, int status) {
    m_title = title;
    m_description = description;
    m_deadline = deadline;
    m_category = category;
    m_prio = prio;
    m_status = status;
}

void Task::set_status(int status) {
    m_status = status;
}

void Task::set_prio(int prio) {
    m_prio = prio;
}

void Task::display_info() const {
    std::cout << "Task ID: " << m_task_id << "\n"
              << "User ID: " << m_uid << "\n"
              << "Title: " << m_title << "\n"
              << "Description: " << m_description << "\n"
              << "Deadline: " << m_deadline << "\n"
              << "Category: " << m_category << "\n"
              << "Priority: " << m_prio << "\n"
              << "Status: " << m_status << std::endl;
}

std::string Task::get_task_id() const {
    return m_task_id;
}

std::string Task::get_uid() const {
    return m_uid;
}
