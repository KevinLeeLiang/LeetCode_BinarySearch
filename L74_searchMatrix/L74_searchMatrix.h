//
// Created by garen_lee on 2025/2/10.
/**
  ******************************************************************************
  * @file           : L74_searchMatrix.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/10
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L74_SEARCHMATRIX_H
#define BINARYSEARCH_L74_SEARCHMATRIX_H

#include "util.h"
class L74_searchMatrix : public LeetcodeBinarySearch{
    bool searchMatrix(vector<vector<int>>& matrix, int target);
public:
    L74_searchMatrix() {}
    void test();
};


#endif //BINARYSEARCH_L74_SEARCHMATRIX_H
