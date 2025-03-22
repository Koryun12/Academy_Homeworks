#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>

class Character {
protected:
    std::string name;
    int health;
    int attackPower;
    int defense;

public:
    Character(const std::string& name, int health, int attackPower, int defense)
        : name(name), health(health), attackPower(attackPower), defense(defense) {}

    virtual void displayStats() const = 0;
    virtual void takeDamage(int damage) = 0;
    virtual ~Character() = default;
};

#endif  
