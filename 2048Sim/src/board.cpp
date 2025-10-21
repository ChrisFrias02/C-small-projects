#include "../include/board.h"
#include <iostream>
#include <algorithm>
using namespace std;

// TODO: compressRow()
std::vector<int> compressRow(const std::vector<int>& row);{
    std::vector<int> newRow;
    for (int num : row) {
        if (num != 0) {
            newRow.push_back(num);
        }

    }
    while (newRow.size() < row.size()) {
        newRow.push_back(0);
    }

}
//  - Use a loop or std::copy_if() to move non-zero values to the front.
//  - Pad the rest of the row with zeros.

// TODO: mergeRow()
//  - Compress the row first.
//  - Loop through adjacent elements; if two are equal, combine them and zero out the next.
//  - Compress again after merging to shift tiles left.
std::vector<int> mergeRow(std::vector<int> row) {
    row = compressedRow(row);
    for (int i = 0; i < row.size()-2; i++){
        if(row[i] == row[i+1] && row[i] != 0){
            row[i] *= 2;
            row[i+1] = 0;
        }

    }
    row = compressRow(row);
    return row;
}

// TODO: moveLeft()
//  - Loop through each row in the board.
//  - Apply mergeRow() to update it.
//  - Track if any change occurred (compare old vs new).
//  - Return true if the board changed at all.
std::vector<std::vector<int>> moveLeft(std::vector<std::vector<int>>& board){
    bool changed = false;
    for (int i = 0; i < board.size(); i++){
        std::vector<int> oldRow = board[i];
        board[i] = mergeRow(board[i]);
        if (board[i] != oldRow){
            changed = true;
        }
    }
}
