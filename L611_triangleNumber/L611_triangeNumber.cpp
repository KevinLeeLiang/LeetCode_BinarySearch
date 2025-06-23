//
// Created by garen_lee on 2025/6/23.
/**
  ******************************************************************************
  * @file           : L611_triangeNumber.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/23
  ******************************************************************************
  */
//

#include "L611_triangeNumber.h"

bool L611_triangeNumber::check(int &a, int &b, int &c) {
    return a + b > c && a + c > b && b + c > a;
}

int L611_triangeNumber::triangleNumber(vector<int> &nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int k = i;
        for (int j = i + 1; j < n; j++) {
            while (k + 1 < n && nums[k + 1] < nums[i] + nums[j]) {
                k++;
            }
            ans += max(k - j, 0);
        }
    }
    return ans;
}

void L611_triangeNumber::test() {
    vector<int> nums = {2, 2, 3, 4};
    cout << triangleNumber(nums) << endl;
    nums = {4, 2, 3, 4};
    cout << triangleNumber(nums) << endl;
}