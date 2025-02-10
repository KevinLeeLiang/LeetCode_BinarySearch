//
// Created by garen_lee on 2025/2/10.
/**
  ******************************************************************************
  * @file           : L74_searchMatrix.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/10
  ******************************************************************************
  */
//

#include "L74_searchMatrix.h"

bool L74_searchMatrix::searchMatrix(vector<vector<int>>& matrix, int target){
    if (matrix.empty() || matrix[0].empty()) {
        return false;
    }
    auto row = upper_bound(matrix.begin(), matrix.end(), target, [](const int b, const vector<int> &a) {
        return b < a[0];
    });
    if (row == matrix.begin()) {
        return false;
    }
    --row;
    return binary_search(row->begin(), row->end(), target);
}

void L74_searchMatrix::test()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;
    bool result = searchMatrix(matrix, target);
    cout << "result: " << result << endl;
    matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    target = 13;
    result = searchMatrix(matrix, target);
    cout << "result: " << result << endl;
}