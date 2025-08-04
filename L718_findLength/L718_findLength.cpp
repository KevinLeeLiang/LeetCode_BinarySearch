//
// Created by garen_lee on 2025/8/4.
/**
  ******************************************************************************
  * @file           : L718_findLength.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/8/4
  ******************************************************************************
  */
//

#include "L718_findLength.h"

int L718_findLength::findLength(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size();
    int m = nums2.size();
    int ans = 0;
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            dp[i][j] = nums1[i] == nums2[j] ? dp[i + 1][j + 1] + 1 : 0;
            ans = max(ans, dp[i][j]);
        }
    }
    return ans;
}

void L718_findLength::test() {
    vector<int> nums1 = {1,2,3,2,1};
    vector<int> nums2 = {3,2,1,4,7};
    cout << findLength(nums1, nums2) << endl;
    nums1 = {0,0,0,0,0};
    nums2 = {0,0,0,0,0};
    cout << findLength(nums1, nums2) << endl;
}