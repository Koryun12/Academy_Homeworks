#include <iostream>

double area(double radius) {
    return 3.14 * radius * radius;
}

double area(double width, double height, char type){ 
    return  width * height;
}    

double area(double base, double height) {
    return 0.5 * base * height;
}

int area(int side) {
    return side * side;
}

int main() {
    int choice;
    std::cout << "Select a shape:\n";
    std::cout << "1. Circle\n";
    std::cout << "2. Rectangle\n";
    std::cout << "3. Triangle\n";
    std::cout << "4. Square\n";
    std::cout << "Enter choice: ";
    std::cin >> choice;

    if (choice == 1) {
        double radius;
        std::cout << "Enter radius: ";
        std::cin >> radius;
        std::cout << "Area of Circle: " << area(radius) << "\n";
    } else if (choice == 2) {
        double width, height;
        std::cout << "Enter width: ";
        std::cin >> width;
        std::cout << "Enter height: ";
        std::cin >> height;
        std::cout << "Area of Rectangle: " << area(width, height, 'r') << "\n";
    } else if (choice == 3) {
        double base, height;
        std::cout << "Enter base: ";
        std::cin >> base;
        std::cout << "Enter height: ";
        std::cin >> height;
        std::cout << "Area of Triangle: " << area(base, height) << "\n";
    } else if (choice == 4) {
        int side = 0;
        std::cout << "Enter side: ";
        std::cin >> side;
        std::cout << "Area of Square: " << area(side) << "\n";
    } else {
        std::cout << "Invalid.\n";
    }

    return 0;
}