//
// Created by garen_lee on 2025/5/12.
/**
  ******************************************************************************
  * @file           : L378_kthSmallest.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/12
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L378_KTHSMALLEST_H
#define BINARYSEARCH_L378_KTHSMALLEST_H

#include "util.h"
class L378_kthSmallest : public LeetcodeBinarySearch {
private:
    int kthSmallest(vector<vector<int>>& matrix, int k);
public:
    L378_kthSmallest() {};
    void test();
};


#endif //BINARYSEARCH_L378_KTHSMALLEST_H
