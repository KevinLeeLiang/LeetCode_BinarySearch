//
// Created by garen_lee on 2025/3/3.
/**
  ******************************************************************************
  * @file           : L209_minSubArrayLen.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/3
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L209_MINSUBARRAYLEN_H
#define BINARYSEARCH_L209_MINSUBARRAYLEN_H

#include "util.h"
class L209_minSubArrayLen : public LeetcodeBinarySearch {
private:
    int minSubArrayLen(int target, vector<int>& nums);
public:
    L209_minSubArrayLen() {};
    void test();
};


#endif //BINARYSEARCH_L209_MINSUBARRAYLEN_H
