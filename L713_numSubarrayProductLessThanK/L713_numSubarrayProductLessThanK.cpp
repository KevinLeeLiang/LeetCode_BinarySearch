//
// Created by garen_lee on 2025/7/21.
/**
  ******************************************************************************
  * @file           : L713_numSubarrayProductLessThanK.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/21
  ******************************************************************************
  */
//

#include "L713_numSubarrayProductLessThanK.h"

int L713_numSubarrayProductLessThanK::numSubarrayProductLessThanK(vector<int> &nums, int k) {
    int n = nums.size();
    int res = 0;
    int prod = 1;
    int i = 0;
    for (int j = 0; j < n; j++) {
        prod *= nums[j];
        while (i <= j && prod >= k) {
            prod /= nums[i];
            i++;
        }
        res += j - i + 1;
    }
    return res;
}

void L713_numSubarrayProductLessThanK::test() {
    vector<int> nums = {10, 5, 2, 6};
    cout << numSubarrayProductLessThanK(nums, 100) << endl;
    nums = {1, 2, 3};
    cout << numSubarrayProductLessThanK(nums, 0) << endl;
}