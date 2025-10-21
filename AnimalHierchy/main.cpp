#include <iostream>
#include <vector>
#include "include/Dog.h"
using namespace std;

int main() {
    // TODO: Create a vector<Animal*> zoo
    vector<Animal*> zoo;

    // TODO: Add multiple Dog objects (and optionally other animals)
    zoo.push_back(new Dog("Buddy", "Golden Retriever"));
    zoo.push_back(new Dog("Max", "German Shepherd"));
    zoo.push_back(new Dog("Bella", "Labrador"));
    // TODO: Loop through and call speak() polymorphically
    for (const auto& animal : zoo) {
        animal->speak();
    }
    // TODO: Delete pointers to call correct destructors
    for (const auto& animal : zoo) {
        delete animal;
    }
    return 0;
}
