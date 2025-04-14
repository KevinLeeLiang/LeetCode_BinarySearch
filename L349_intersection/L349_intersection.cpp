//
// Created by garen_lee on 2025/4/14.
/**
  ******************************************************************************
  * @file           : L349_intersection.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/14
  ******************************************************************************
  */
//

#include "L349_intersection.h"

vector<int> L349_intersection::intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int>map;
    for (int i = 0; i < nums1.size(); i++) {
        map[nums1[i]] = 1;
    }
    vector<int>res;
    for (int i = 0; i < nums2.size(); i++) {
        if (map.find(nums2[i]) != map.end()) {
            res.push_back(nums2[i]);
            map.erase(nums2[i]);
        }
    }
    return res;
}

void L349_intersection::test() {
    vector<int>nums1 = {1,2,2,1};
    vector<int>nums2 = {2,2};
    vector<int>res = intersection(nums1, nums2);
    print_vector(res);
    nums1 = {4,9,5};
    nums2 = {9,4,9,8,4};
    res = intersection(nums1, nums2);
    print_vector(res);
}