#ifndef DOG
#define DOG

#include <string>
struct Dog {
    std::string name; // The dog's name
    int maxHealth = 100; // The dog's maximum health value
    int health = maxHealth; // The dog's health
    int def = 30; // The dog's defense value
    int totalDMGTaken = 0; // Total damage the dog has taken
};

int main() {
    Dog;
}

#endif