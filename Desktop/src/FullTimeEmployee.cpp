#include <iostream>
#include <string>

class FullTimeEmployee : public Employee {
public:
 
    FullTimeEmployee(int id, const std::string& employeeName, double employeeSalary, const std::string& employeeRole, const std::string& employeeStatus)
        : Employee(id, employeeName, employeeSalary, employeeRole, employeeStatus) {}

   
    void calculateSalary() const override {
        std::cout << "Full-Time Employee Salary: $" << salary << " (Fixed Monthly Salary)" << std::endl;
    }

    void promote() override {
        salary += 1000; 
        std::cout << "Promotion granted! New salary: $" << salary << std::endl;
    }

    void performanceReview() override {
        std::cout << "Conducting performance review for: " << name << std::endl;
        int performanceScore = 85; 
        if (performanceScore > 80) {
            promote();
        } else {
            std::cout << "Performance review completed. No changes." << std::endl;
        }
    }

    void updateRole(const std::string& newRole) override {
        role = newRole;
        std::cout << "Role updated to: " << role << std::endl;
    }
};
