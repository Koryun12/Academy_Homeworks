class Employee {
    std::string name;
    std::string position;

public:
    Employee(const std::string& name, const std::string& position)
        : name(name), position(position) {}

    void displayDetails() const {
        std::cout << "Employee Name: " << name << ", Position: " << position << std::endl;
    }
};
 