//
// Created by garen-lee on 2025/2/3.
/**
  ******************************************************************************
  * @file           : L4_findMedianSortedArrays.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/3
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L4_FINDMEDIANSORTEDARRAYS_H
#define BINARYSEARCH_L4_FINDMEDIANSORTEDARRAYS_H

#include "util.h"
class L4_findMedianSortedArrays : public LeetcodeBinarySearch{
private:
    int getKthElement(const vector<int>& nums1, const vector<int>& nums2, int k);
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
public:
    L4_findMedianSortedArrays(){}
    void test();
};


#endif //BINARYSEARCH_L4_FINDMEDIANSORTEDARRAYS_H
