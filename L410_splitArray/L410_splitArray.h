//
// Created by garen_lee on 2025/5/19.
/**
  ******************************************************************************
  * @file           : L410_splitArray.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/19
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L410_SPLITARRAY_H
#define BINARYSEARCH_L410_SPLITARRAY_H

#include "util.h"
class L410_splitArray : public LeetcodeBinarySearch {
private:
    int splitArray(vector<int>& nums, int k);
    bool check(vector<int>& nums, int x, int m);
public:
    L410_splitArray() {}
    void test();
};


#endif //BINARYSEARCH_L410_SPLITARRAY_H
