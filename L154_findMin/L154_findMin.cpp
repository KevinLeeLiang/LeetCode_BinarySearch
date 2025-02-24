//
// Created by garen_lee on 2025/2/24.
/**
  ******************************************************************************
  * @file           : L154_findMin.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/24
  ******************************************************************************
  */
//

#include "L154_findMin.h"

int L154_findMin::findMin(vector<int> &nums) {
    int low = 0;
    int high = nums.size() - 1;
    while (low < high) {
        int pivot = low + (high - low) / 2;
        if (nums[pivot] < nums[high]) {
            high = pivot;
        }
        else if (nums[pivot] > nums[high]) {
            low = pivot + 1;
        }
        else {
            high -= 1;
        }
    }
    return nums[low];
}

void L154_findMin::test() {
    vector<int> nums = {1, 3, 5};
    cout << findMin(nums) << endl;
    nums = {2, 2, 2, 0, 1};
    cout << findMin(nums) << endl;
}