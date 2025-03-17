//
// Created by garen_lee on 2025/3/17.
/**
  ******************************************************************************
  * @file           : L240_searchMatrix.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/17
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L240_SEARCHMATRIX_H
#define BINARYSEARCH_L240_SEARCHMATRIX_H

#include "util.h"
class L240_searchMatrix : public LeetcodeBinarySearch {
private:
    bool searchMatrix(vector<vector<int>>& matrix, int target);
public:
    L240_searchMatrix(){}
    void test();
};


#endif //BINARYSEARCH_L240_SEARCHMATRIX_H
