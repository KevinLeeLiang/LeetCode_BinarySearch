//
// Created by garen_lee on 2025/2/5.
/**
  ******************************************************************************
  * @file           : L34_searchRange.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/5
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L34_SEARCHRANGE_H
#define BINARYSEARCH_L34_SEARCHRANGE_H

#include "util.h"
class L34_searchRange : public LeetcodeBinarySearch{
private:
    vector<int> searchRange(vector<int>& nums, int target);
    int binarySearch(vector<int>& nums, int target, bool lower);
public:
    L34_searchRange() {}
    void test();
};


#endif //BINARYSEARCH_L34_SEARCHRANGE_H
