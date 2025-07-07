//
// Created by garen_lee on 2025/7/7.
/**
  ******************************************************************************
  * @file           : L704_binarySearch.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/7
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L704_BINARYSEARCH_H
#define BINARYSEARCH_L704_BINARYSEARCH_H

#include "util.h"
class L704_binarySearch : public LeetcodeBinarySearch {
private:
    int binarySearch(vector<int> &nums, int left, int right, int target);
    int search(vector<int> &nums, int target);
public:
    L704_binarySearch() {}
    void test();
};


#endif //BINARYSEARCH_L704_BINARYSEARCH_H
