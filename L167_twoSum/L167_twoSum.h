//
// Created by garen-lee on 2025/3/10.
/**
  ******************************************************************************
  * @file           : L167_twoSum.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/10
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L167_TWOSUM_H
#define BINARYSEARCH_L167_TWOSUM_H

#include "util.h"

class L167_twoSum : public LeetcodeBinarySearch {
private:
    vector<int> twoSum(vector<int>& numbers, int target);
public:
    L167_twoSum() {}
    void test();
};


#endif //BINARYSEARCH_L167_TWOSUM_H
