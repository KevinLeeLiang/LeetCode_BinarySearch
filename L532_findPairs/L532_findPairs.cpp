//
// Created by garen_lee on 2025/6/16.
/**
  ******************************************************************************
  * @file           : L532_findPairs.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/16
  ******************************************************************************
  */
//

#include "L532_findPairs.h"

int L532_findPairs::findPairs(vector<int> &nums, int k) {
    sort(nums.begin(), nums.end());
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] - nums[i] == k) {
                count++;
                break;
            }
            if (nums[j] - nums[i] > k) {
                break;
            }
        }
    }
    return count;
}

void L532_findPairs::test() {
    vector<int> nums = {3, 1, 4, 1, 5};
    int k = 2;
    cout << findPairs(nums, k) << endl;
    nums = {1, 2, 3, 4, 5};
    k = 1;
    cout << findPairs(nums, k) << endl;
    nums = {1, 3, 1, 5, 4};
    k = 0;
    cout << findPairs(nums, k) << endl;
}