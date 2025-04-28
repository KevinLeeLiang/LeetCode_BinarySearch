//
// Created by garen_lee on 2025/4/28.
/**
  ******************************************************************************
  * @file           : L363_maxSumSubmatrix.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/28
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L363_MAXSUMSUBMATRIX_H
#define BINARYSEARCH_L363_MAXSUMSUBMATRIX_H

#include "util.h"
class L363_maxSumSubmatrix : public LeetcodeBinarySearch {
private:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k);
public:
    L363_maxSumSubmatrix() {}
    void test();
};


#endif //BINARYSEARCH_L363_MAXSUMSUBMATRIX_H
