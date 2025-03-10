//
// Created by garen-lee on 2025/3/10.
/**
  ******************************************************************************
  * @file           : L167_twoSum.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/10
  ******************************************************************************
  */
//

#include "L167_twoSum.h"

vector<int> L167_twoSum::twoSum(vector<int> &nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n / 2 + 1; i++) {
        int left = i + 1;
        int right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[i] + nums[mid] < target) {
                left = mid + 1;
            } else if (nums[i] + nums[mid] > target) {
                right = mid - 1;
            } else {
                return {i + 1, mid + 1};
            }
        }
    }
    return {-1, -1};
}

void L167_twoSum::test() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    print_vector(result);
    nums = {2, 3, 4};
    target = 6;
    result = twoSum(nums, target);
    print_vector(result);
    nums = {-1, 0};
    target = -1;
    result = twoSum(nums, target);
    print_vector(result);
    nums = {5,25,75};
    target = 100;
    result = twoSum(nums, target);
    print_vector(result);
    nums = {1,2,3,4,4,9,56,90};
    target = 8;
    result = twoSum(nums, target);
    print_vector(result);
}