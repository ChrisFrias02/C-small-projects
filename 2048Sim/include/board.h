#ifndef BOARD_H
#define BOARD_H

#include <vector>

// TODO: Remove zeros from a row and pad the end with zeros.
//  - Example: [2, 0, 4, 0] → [2, 4, 0, 0]
std::vector<int> compressRow(const std::vector<int>& row);

// TODO: Merge adjacent equal tiles after compression.
//  - Example: [2, 2, 4, 0] → [4, 4, 0, 0]
std::vector<int> mergeRow(std::vector<int> row);

// TODO: Apply a “move left” to the 4×4 board.
//  - For each row, call compressRow() then mergeRow().
//  - Return true if any row changed.
bool moveLeft(std::vector<std::vector<int>>& board);

#endif
 