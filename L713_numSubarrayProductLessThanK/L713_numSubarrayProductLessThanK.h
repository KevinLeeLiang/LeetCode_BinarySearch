//
// Created by garen_lee on 2025/7/21.
/**
  ******************************************************************************
  * @file           : L713_numSubarrayProductLessThanK.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/21
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L713_NUMSUBARRAYPRODUCTLESSTHANK_H
#define BINARYSEARCH_L713_NUMSUBARRAYPRODUCTLESSTHANK_H

#include "util.h"
class L713_numSubarrayProductLessThanK : public LeetcodeBinarySearch {
private:
    int numSubarrayProductLessThanK(vector<int> &nums, int k);
public:
    L713_numSubarrayProductLessThanK() {}
    void test();
};


#endif //BINARYSEARCH_L713_NUMSUBARRAYPRODUCTLESSTHANK_H
