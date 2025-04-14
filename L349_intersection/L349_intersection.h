//
// Created by garen_lee on 2025/4/14.
/**
  ******************************************************************************
  * @file           : L349_intersection.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/14
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L349_INTERSECTION_H
#define BINARYSEARCH_L349_INTERSECTION_H

#include "util.h"
class L349_intersection : public LeetcodeBinarySearch {
private:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2);
public:
    L349_intersection() {}
    void test();
};


#endif //BINARYSEARCH_L349_INTERSECTION_H
