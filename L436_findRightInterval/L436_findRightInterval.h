//
// Created by garen_lee on 2025/5/19.
/**
  ******************************************************************************
  * @file           : L436_findRightInterval.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/19
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L436_FINDRIGHTINTERVAL_H
#define BINARYSEARCH_L436_FINDRIGHTINTERVAL_H

#include "util.h"
class L436_findRightInterval : public LeetcodeBinarySearch {
private:
    vector<int> findRightInterval(vector<vector<int>>& intervals);
public:
    L436_findRightInterval() {}
    void test();
};


#endif //BINARYSEARCH_L436_FINDRIGHTINTERVAL_H
