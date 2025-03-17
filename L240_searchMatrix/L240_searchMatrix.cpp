//
// Created by garen_lee on 2025/3/17.
/**
  ******************************************************************************
  * @file           : L240_searchMatrix.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/17
  ******************************************************************************
  */
//

#include "L240_searchMatrix.h"

bool L240_searchMatrix::searchMatrix(vector<vector<int>> &matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();
    int x = 0;
    int y = n - 1;
    while (x < m && y >=0) {
        if (matrix[x][y] == target)
            return true;
        if (matrix[x][y] > target)
            y--;
        else
            x++;;
    }
    return false;
}

void L240_searchMatrix::test() {
    vector<vector<int>> matrix = {{1,  4,  7,  11, 15},
                                  {2,  5,  8,  12, 19},
                                  {3,  6,  9,  16, 22},
                                  {10, 13, 14, 17, 24},
                                  {18, 21, 23, 26, 30}};
    int target = 5;
    cout << searchMatrix(matrix, target) << endl;
    target = 20;
    cout << searchMatrix(matrix, target) << endl;
}
