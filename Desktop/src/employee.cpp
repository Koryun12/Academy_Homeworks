#include <iostream>
#include <string>

class Employee {
protected:
    int employeeID;
    std::string name;
    double salary;
    std::string role;
    std::string status;

public:

    Employee(int id, const std::string& employeeName, double employeeSalary, const std::string& employeeRole, const std::string& employeeStatus)
        : employeeID(id), name(employeeName), salary(employeeSalary), role(employeeRole), status(employeeStatus) {}

    
    virtual ~Employee() {}

    
    virtual void calculateSalary() const = 0; 
    virtual void promote() = 0;
    virtual void performanceReview() = 0;
    virtual void updateRole(const std::string& newRole) = 0;

    
    int getEmployeeID() const { return employeeID; }
    std::string getName() const { return name; }
    double getSalary() const { return salary; }
    std::string getRole() const { return role; }
    std::string getStatus() const { return status; }
};
