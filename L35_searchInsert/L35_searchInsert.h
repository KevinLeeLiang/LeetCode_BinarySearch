//
// Created by garen_lee on 2025/2/5.
/**
  ******************************************************************************
  * @file           : L35_searchInsert.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/5
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L35_SEARCHINSERT_H
#define BINARYSEARCH_L35_SEARCHINSERT_H

#include "util.h"
class L35_searchInsert : public LeetcodeBinarySearch{
private:
    int searchInsert(vector<int>& nums, int target);
    int search(vector<int>& nums, int left, int right, int target);
public:
    L35_searchInsert(){}
    void test();
};


#endif //BINARYSEARCH_L35_SEARCHINSERT_H
