#include <iostream>
#include <string>
class Dish {
    protected:
        std::string name;
        double price;
    public:
        Dish(std::string dishName, double dishPrice);
        Dish(const Dish& other);
        Dish& operator=(const Dish& other);
        Dish(Dish&& other) noexcept;
        Dish& operator=(Dish&& other) noexcept;

        void display () const;
        double getPrice() const;
        std::string getName() const;
};

class Appetizer : public Dish
{
    private:
        bool isSpicy;
    public:
        Appetizer(std::string dishName, double dishPrice, boll spicy);
        void display() const;
};

class Entree : public Dish
{
    private:
     int calories;
public:
    Entree(std::string dishName, double dishPrice, int cal);
    void display() const;
};
class Dessert : public Dish {
private:
    bool containsNuts;
public:
    Dessert(std::string dishName, double dishPrice, bool nuts);
    void display() const;
};

class Menu {
private:
    std::vector<Dish*> dishes;
public:

    Menu(const Menu& other);
    Menu& operator=(const Menu& other);
    Menu(Menu&& other) noexcept;
    Menu& operator=(Menu&& other) noexcept;
    ~Menu();
    void addDish(Dish* dish);
    void displayMenu() const;
    Dish* getDishByName(const std::string& dishName) const;
};

class Customer {
private:
    std::string name;
    std::string contactInfo;
    std::vector<Order> orderHistory;
public:
        Customer(std::string customerName, std::string contact);
    Customer(const Customer& other);
    Customer& operator=(const Customer& other);
    Customer(Customer&& other) noexcept;
    Customer& operator=(Customer&& other) noexcept;
    ~Customer() = default;
    void placeOrder(Order order);
    void viewOrderHistory() const;
    std::string getName() const;
};

class Order {
private:
    Customer* customer;
    std::vector<Dish*> orderedDishes;
    double totalPrice;
public:
    Order(Customer* customer);
    Order(const Order& other);
    Order& operator=(const Order& other);
Order(Order&& other) noexcept;
    Order& operator=(Order&& other) noexcept;
    ~Order() = default;
    void addDish(Dish* dish);
    void calculateTotal();
    void displayOrder() const;
};
class Restaurant {
private:
    Menu menu;
    std::vector<Customer*> customers;
    std::vector<Order> orders;
public:

    Restaurant();
    Restaurant(const Restaurant& other);
    Restaurant& operator=(const Restaurant& other);
    Restaurant(Restaurant&& other) noexcept;
    Restaurant& operator=(Restaurant&& other) noexcept;
    ~Restaurant();
    void showMenu() const;
    Customer* getCustomerByName(const std::string& name);
    void placeNewOrder(const std::string& customerName);
    void viewCustomerOrderHistory(const std::string& customerName) const;
}; 

