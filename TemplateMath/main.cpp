#include <iostream>
#include <vector>
#include "include/math_utils.h"
using namespace std;

int main() {
    cout << "Template Math Toolkit" << endl;

    // TODO: Create some test values (int and double)
    //  - Example: int a = 3, b = 5; double x = 2.5, y = 4.1;
    int a = 10, b = 5;
    double x = 7.5, y = 2.5;


    // TODO: Call the template math functions and print results
    //  - Example: add(a, b), add(x, y), etc.
    cout << "Addition (int): " << add(a, b) << endl;
    cout << "Addition (double): " << add(x, y) << endl;
    cout << "Subtraction (int): " << subtract(a, b) << endl;
    cout << "Subtraction (double): " << subtract(x, y) << endl;
    cout << "Multiplication (int): " << multiply(a, b) << endl;
    cout << "Multiplication (double): " << multiply(x, y) << endl;
    cout << "Division (int): " << divide(a, b) << endl;

    // TODO: Create a vector of numbers and test printVector()
    //  - Example: vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << "Vector elements: ";
    printVector(nums);

    return 0;
}
