#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
protected:
    std::string name;

public:
    // TODO: Default constructor and parameterized constructor
        Animal();
        Animal(const std::string& name);
    // TODO: Virtual destructor
        virtual ~Animal();
    // TODO: Virtual speak() function
        virtual void speak() const;
    // TODO: Getter for name
    std::string getName() const;
};

#endif
