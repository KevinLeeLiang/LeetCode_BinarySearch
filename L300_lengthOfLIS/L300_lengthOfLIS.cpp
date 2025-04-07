//
// Created by garen_lee on 2025/4/7.
/**
  ******************************************************************************
  * @file           : L300_lengthOfLIS.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/7
  ******************************************************************************
  */
//

#include "L300_lengthOfLIS.h"

int L300_lengthOfLIS::lengthOfLIS(vector<int> &nums) {
    int len = 1, n = nums.size();
    if (n == 0) return 0;
    vector<int> dp(n, 1);
    dp[len] = nums[0];
    for (int i = 1; i < n; ++i) {
        if (nums[i] > dp[len]) {
            dp[++len] = nums[i];
        } else {
            int l = 1, r = len, pos = 0;
            while (l <= r) {
                int mid = (l + r) >> 1;
                if (dp[mid] < nums[i]) {
                    pos = mid;
                    l = mid + 1;
                } else {
                    r = mid - 1;
               }
            }
            dp[pos + 1] = nums[i];
        }
    }
    return len;
}

void L300_lengthOfLIS::test() {
    vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
    cout << lengthOfLIS(nums) << endl;
    nums = {0, 1, 0, 3, 2, 3};
    cout << lengthOfLIS(nums) << endl;
    nums = {7, 7, 7, 7, 7, 7, 7};
    cout << lengthOfLIS(nums) << endl;
}