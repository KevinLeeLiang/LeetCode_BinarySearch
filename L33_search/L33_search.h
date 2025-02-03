//
// Created by garen-lee on 2025/2/3.
/**
  ******************************************************************************
  * @file           : L33_search.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/3
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L33_SEARCH_H
#define BINARYSEARCH_L33_SEARCH_H

#include "util.h"
class L33_search : public LeetcodeBinarySearch{
private:
    int search(vector<int>& nums, int target);
public:
    L33_search(){}
    void test();
};


#endif //BINARYSEARCH_L33_SEARCH_H
