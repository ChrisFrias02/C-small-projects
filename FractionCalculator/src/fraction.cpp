#include "../include/fraction.h"
#include <iostream>
using namespace std;

// TODO: Initialize members for default fraction.
Fraction::Fraction(){
    numerator = 0;
    denominator = 1;
}

// TODO: Initialize members using given parameters.
Fraction::Fraciton(int num, int den){
    if(den == 0){
        cout<< "Error: Denominator cannot be zero." << endl;
        denominator = 1;
    }else{
        denominator = den;

    }numerator = num;
    simplify()
  }



// TODO: Copy values from another Fraction.
Fraction::Fraction(const Fraction& other){
    numerator = other.numerator;
    denominator = other.denominator;
}

// TODO: Return numerator.
int Fraction::getNumerator() const{
    return numerator;
}

// TODO: Return denominator.
int Fraction::getDenominator() const{
    return denominator;
}

// TODO: Simplify the fraction (reduce to simplest form).
void Fraction::simplify(){
    int g = gcd(numerator, denominator);
    if(g != 0){
        numerator /= g;
        denominator /= g;
    }
    if(denominator < 0){
        numerator = -numerator;
        denominator = -denominator;
}

// TODO: Add two fractions and return the result.
Fraction Fraction::operator+(const Fraction& other) const{
    int num = numerator * other.denominator + other.numerator * denominator;
    int den = denominator * other.denominator;
    return Fraction(num, den);
}

// TODO: Subtract two fractions and return the result.
Fraction Fraction::operator-(const Fraction& other) const{
    int num = numerator * other.denominator - other.numerator * denominator;
    int den = denominator * other.denominator;
    return Fraction(num, den);
}

// TODO: Multiply two fractions and return the result.
Fraction Fraction::operator*(const Fraction& other) const{
    int num = numerator * other.numerator;
    int den = denominator * other.denominator;
    return Fraction(num, den);
}

// TODO: Divide two fractions and return the result.
Fraction Fraction::operator/(const Fraction& other) const{
    if(other.numerator == 0){
        cout << "Error: Division by zero fraction." << endl;
        return Fraction(0, 1);
    }
    int num = numerator * other.denominator;
    int den = denominator * other.numerator;
    return Fraction(num, den);
}

// TODO: Print the fraction in "num/den" format.
ostream& operator<<(ostream& os, const Fraction& f){
    os << f.numerator << "/" << f.denominator;
    return os;
}
