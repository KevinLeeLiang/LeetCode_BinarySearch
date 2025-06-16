//
// Created by garen_lee on 2025/6/16.
/**
  ******************************************************************************
  * @file           : L532_findPairs.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/16
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L532_FINDPAIRS_H
#define BINARYSEARCH_L532_FINDPAIRS_H

#include "util.h"
class L532_findPairs : public LeetcodeBinarySearch {
private:
    int findPairs(vector<int>& nums, int k);
public:
    L532_findPairs() {}
    void test();
};


#endif //BINARYSEARCH_L532_FINDPAIRS_H
