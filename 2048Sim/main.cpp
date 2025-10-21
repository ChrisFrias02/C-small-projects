#include <iostream>
#include "include/board.h"
using namespace std;

int main() {
    // TODO: Create a 4×4 board (vector of vectors).
    //  - Fill it with some test values (mix of 0s and numbers).
    std::vector<std::vector<int>> board = {
        {2, 0, 2, 4},
        {0, 4, 4, 0},
        {2, 2, 2, 2},
        {0, 0, 0, 2}
    };


    // TODO: Print the board before the move.
    ccout << "Board before move:" << endl;
    for (const auto& row : board) {
        for (int num : row) {
            cout << num << "\t";
        }
        cout << endl;
    }

    // TODO: Call moveLeft(board).
    bool changed = moveLeft(board);

    // TODO: Print the board again after the move and show if it changed.
    cout << "\nBoard after move:" << endl;
    for (const auto& row : board) {
        for (int num : row) {
            cout << num << "\t";
        }
        cout << endl;
    }

    return 0;
}
