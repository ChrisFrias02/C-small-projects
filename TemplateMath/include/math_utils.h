#ifndef MATH_UTILS_H
#define MATH_UTILS_H

#include <vector>

// TODO: Create a template function add()
//  - It should take two parameters of the same type
//  - Return their sum
template <typename T>
T add(T a, T b) {
    return a + b;
}

// TODO: Create template functions subtract(), multiply(), divide()
//  - Each should work for int, double, or float
template <typename T>
T subtract(T a, T b){
    return a - b;
}

template <typename T>
T multiply(T a, T b){
    return a * b;

}

template <typename T>
T divide(T a, T b){
    return a / b;
}

// TODO: Create a function that prints all elements of a vector
//  - Use a range-based for loop with auto
//  - Remember to mark it const if it doesn't modify the vector
void printVector(const std::vector<int> &vec){
    for (const auto &elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

}

#endif // MATH_UTILS_H
