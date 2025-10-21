#include <iostream>
#include <vector>
#include "include/doubler.h"
using namespace std;

int main() {
    // TODO: Create a vector to hold integer inputs.
    vector<int> nums;

    cout << "Enter numbers (type -1 to stop): ";
    int value;

    // TODO: Read input values from the user until -1 is entered.
    while (cin >> value && value != -1) {
        nums.push_back(value);
    }

    cout << "\nOriginal vector: ";
    // TODO: Print the original values.
    printVector(nums);

    // TODO: Call the function to double all numbers.
    doubleValues(nums);

    cout << "Doubled vector: ";
    // TODO: Print the updated vector.
    printVector(nums);

    return 0;
}
