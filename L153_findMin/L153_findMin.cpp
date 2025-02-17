//
// Created by garen_lee on 2025/2/17.
/**
  ******************************************************************************
  * @file           : L153_findMin.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/17
  ******************************************************************************
  */
//

#include "L153_findMin.h"

int L153_findMin::findMin(vector<int> &nums) {
    if (nums.size() == 1) {
        return nums[0];
    } else if (nums[0] < nums[nums.size() - 1]) {
        return nums[0];
    } else {
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <nums[right]) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return nums[right];
    }
}

void L153_findMin::test() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    cout << findMin(nums) << endl;
    nums = {3, 4, 5, 1, 2};
    cout << findMin(nums) << endl;
    nums = {11, 13, 15, 17};
    cout << findMin(nums) << endl;
    nums = {2, 1};
    cout << findMin(nums) << endl;
}