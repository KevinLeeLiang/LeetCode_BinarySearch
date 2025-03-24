//
// Created by garen_lee on 2025/3/24.
/**
  ******************************************************************************
  * @file           : L268_missingNumber.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/24
  ******************************************************************************
  */
//

#include "L268_missingNumber.h"

int L268_missingNumber::missingNumber(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == mid) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left;
}

void L268_missingNumber::test() {
    vector<int>nums = {3,0,1};
    cout << missingNumber(nums) << endl;
    nums = {0,1};
    cout << missingNumber(nums) << endl;
    nums = {9,6,4,2,3,5,7,0,1};
    cout << missingNumber(nums) << endl;
}