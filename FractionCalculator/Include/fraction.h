#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

    // TODO: Simplify the fraction to lowest terms.
    void simplify();

public:
    // TODO: Default constructor.
    Fraction();

    // TODO: Constructor that takes numerator and denominator.
    Fraction(int num, int den);

    // TODO: Copy constructor.
    Fraction(const Fraction& other);

    // TODO: Accessor functions for numerator and denominator.
    int getNumerator() const;
    int getDenominator() const;

    // TODO: Arithmetic operator overloads.
    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;

    // TODO: Output operator for displaying the fraction.
    friend ostream& operator<<(ostream& os, const Fraction& f);
};

#endif // FRACTION_H
