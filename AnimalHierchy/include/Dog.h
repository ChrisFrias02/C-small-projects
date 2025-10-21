#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal {
private:
    std::string breed;

public:
    // TODO: Constructor taking name and breed
    Dog(const std::string&name, const std::string& breed);

    // TODO: Override speak() to print "Woof!"
    void speak() const override;
    // TODO: Add getter for breed
    stdd::string getBreed() const;
    // TODO: Destructor
     ~Dog();
};

#endif
