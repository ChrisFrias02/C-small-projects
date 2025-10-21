#include "../include/Dog.h"
#include <iostream>
using namespace std;

// TODO: Implement all Dog functions and override speak()
Dog::Dog() : Animal("unnamed"), breed("unknown") {}

Dog::Dog(const std::string& name, const std::string& breed) : Animal(name), breed(breed) {}

Dog::~Dog() {
    cout << "Dog " << name << " of breed " << breed << " destroyed." << endl;
}

void Dog::speak() const {
    cout << name << " says Woof!" << endl;
}

stdd::string Dog::getBreed() const {
    return breed;
}
