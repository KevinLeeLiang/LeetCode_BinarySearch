//
// Created by garen_lee on 2025/6/9.
/**
  ******************************************************************************
  * @file           : L493_reversePairs.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/9
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L493_REVERSEPAIRS_H
#define BINARYSEARCH_L493_REVERSEPAIRS_H

#include "util.h"
class L493_reversePairs : public LeetcodeBinarySearch {
private:
    int reversePairs(vector<int>& nums);
    int reversePairsRecursive(vector<int>& nums, int left, int right);
public:
    L493_reversePairs() {}
    void test();
};


#endif //BINARYSEARCH_L493_REVERSEPAIRS_H
