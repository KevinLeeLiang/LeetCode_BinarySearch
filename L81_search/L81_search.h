//
// Created by garen_lee on 2025/2/17.
/**
  ******************************************************************************
  * @file           : L81_search.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/17
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L81_SEARCH_H
#define BINARYSEARCH_L81_SEARCH_H

#include "util.h"
class L81_search : public LeetcodeBinarySearch{
private:
    bool search(vector<int>& nums, int target);
public:
    L81_search(){}
    void test();
};


#endif //BINARYSEARCH_L81_SEARCH_H
