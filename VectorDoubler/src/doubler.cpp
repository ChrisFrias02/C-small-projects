#include "../include/doubler.h"
#include <iostream>
using namespace std;

// TODO: Define the function that doubles each number in the vector.
//  - Use a loop to go through each element and multiply it by 2.
void doubleValues(vector<int>& nums) {
    // TODO: Loop through the vector and update each element.
    for(int i = 0; i < nums.size(); ++i){
        nums[i] *=2;
    }
    _______________________________
}

// TODO: Define the function that prints the vector elements.
//  - Print each element separated by spaces and end with a newline.
void printVector(const vector<int>& nums) {
    for(int i = 0; i < nums.size(); ++i){
        cout << nums[i] << " ";
    }
    // TODO: Loop through and print each number.
    _______________________________
}
