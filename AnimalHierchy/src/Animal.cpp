#include "../include/Animal.h"
#include <iostream>
using namespace std;

// TODO: Implement constructors, speak(), and destructor
Animal:: Animal() : name("unamed"){}

Animal:: Animal(const std::string& name) : name(name) {}

Animal::~Animal() {
    cout << "Animal " << name << " destroyed." << endl;
}
void Animal::speak() const {
    cout << name << " makes a sound." << endl;
}

std::string Animal::getName() const {
    return name;
}