//
// Created by garen_lee on 2025/4/21.
/**
  ******************************************************************************
  * @file           : L350_intersect.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/21
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L350_INTERSECT_H
#define BINARYSEARCH_L350_INTERSECT_H

#include "util.h"
class L350_intersect : public LeetcodeBinarySearch {
private:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2);
public:
    L350_intersect() {}
    void test();
};


#endif //BINARYSEARCH_L350_INTERSECT_H
