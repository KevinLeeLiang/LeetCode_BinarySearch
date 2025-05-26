//
// Created by garen_lee on 2025/5/26.
/**
  ******************************************************************************
  * @file           : L456_find132pattern.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/26
  ******************************************************************************
  */
//

#include "L456_find132pattern.h"

bool L456_find132pattern::find132pattern(vector<int> &nums) {
    int n = nums.size();
    if (n < 3) {
        return false;
    }
    int left_min = nums[0];
    multiset<int> right_all;
    for (int k = 2; k < n; k++) {
        right_all.insert(nums[k]);
    }
    for (int j = 1; j < n - 1; j++) {
        if (left_min < nums[j]) {
            auto it = right_all.upper_bound(left_min);
            if (it != right_all.end() && *it < nums[j]) {
                return true;
            }
        }
        left_min = min(left_min, nums[j]);
        right_all.erase(right_all.find(nums[j + 1]));
    }
    return false;
}

void L456_find132pattern::test() {
    vector<int> nums = {1, 2, 3, 4};
    cout << find132pattern(nums) << endl;
    nums = {3, 1, 4, 2};
    cout << find132pattern(nums) << endl;
    nums = {-1, 3, 2, 0};
    cout << find132pattern(nums) << endl;
}