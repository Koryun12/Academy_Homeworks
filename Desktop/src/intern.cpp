#include <iostream>
#include <string>

class Intern : public Employee {
private:
    double stipend; 

public:
    Intern(int id, const std::string& employeeName, double internStipend, const std::string& employeeRole, const std::string& employeeStatus)
        : Employee(id, employeeName, internStipend, employeeRole, employeeStatus), stipend(internStipend) {}

    void calculateSalary() const override {
        std::cout << "Intern Stipend: $" << stipend << " (Fixed Amount)" << std::endl;
    }

    void promote() override {
        std::cout << "Interns typically do not receive promotions in the traditional sense, but they can transition to full-time roles." << std::endl;
    }

    void performanceReview() override { 
        std::cout << "Conducting performance review for: " << name << std::endl;
        int performanceScore = 90; 
        if (performanceScore > 85) {
            std::cout << "Performance is exceptional! Consider offering a full-time role." << std::endl;
        } else {
            std::cout << "Performance review completed. Suggestions for improvement have been shared." << std::endl;
        }
    }

    void updateRole(const std::string& newRole) override {
        role = newRole;
        std::cout << "Intern's role updated to: " << role << std::endl;
    }
};
