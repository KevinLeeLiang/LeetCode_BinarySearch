//
// Created by garen_lee on 2025/4/14.
/**
  ******************************************************************************
  * @file           : L327_countRangeSum.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/14
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L327_COUNTRANGESUM_H
#define BINARYSEARCH_L327_COUNTRANGESUM_H

#include "util.h"
class L327_countRangeSum : public LeetcodeBinarySearch {
private:
    int countRangeSum(vector<int>& nums, int lower, int upper);
    int countRangeSumRecursive(vector<long>& sum, int lower, int upper, int left, int right);
public:
    L327_countRangeSum(){}
    void test();
};


#endif //BINARYSEARCH_L327_COUNTRANGESUM_H
