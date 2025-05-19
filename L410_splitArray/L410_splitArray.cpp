//
// Created by garen_lee on 2025/5/19.
/**
  ******************************************************************************
  * @file           : L410_splitArray.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/19
  ******************************************************************************
  */
//

#include "L410_splitArray.h"

bool L410_splitArray::check(vector<int>& nums, int x, int m) {
    long long sum = 0;
    int cnt = 1;
    for (int i = 0; i < nums.size(); i++) {
        if (sum + nums[i] > x) {
            cnt++;
            sum = nums[i];
        } else {
            sum += nums[i];
        }
    }
    return cnt <= m;
}

int L410_splitArray::splitArray(vector<int> &nums, int m) {
    long long left = 0, right = 0;
    for (int i = 0; i < nums.size(); i++) {
        right += nums[i];
        if (left < nums[i]) {
            left = nums[i];
        }
    }
    while (left < right) {
        long long mid = (left + right) >> 1;
        if (check(nums, mid, m)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}

void L410_splitArray::test() {
    vector<int> nums = {7,2,5,10,8};
    int k = 2;
    cout << splitArray(nums, k) << endl;
    nums = {1,2,3,4,5};
    k = 2;
    cout << splitArray(nums, k) << endl;
    nums = {1,4,4};
    k = 3;
    cout << splitArray(nums, k) << endl;
}