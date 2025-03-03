//
// Created by garen_lee on 2025/3/3.
/**
  ******************************************************************************
  * @file           : L209_minSubArrayLen.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/3
  ******************************************************************************
  */
//

#include "L209_minSubArrayLen.h"

int L209_minSubArrayLen::minSubArrayLen(int target, vector<int> &nums) {
    int n = nums.size();
    if (n == 0) {
        return 0;
    }
    int ans = INT_MAX;
    vector<int> sums(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        sums[i] = sums[i - 1] + nums[i - 1];
    }
    for (int i = 1; i <= n; ++i) {
        int t = target + sums[i - 1];
        auto bound = lower_bound(sums.begin(), sums.end(), t);
        if (bound != sums.end()) {
            ans = min(ans, static_cast<int>((bound - sums.begin()) - (i - 1)));
        }
    }
    return ans == INT_MAX ? 0 : ans;
}

void L209_minSubArrayLen::test() {
    int target = 7;
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    cout << minSubArrayLen(target, nums) << endl;
    target = 4;
    nums = {1, 4, 4};
    cout << minSubArrayLen(target, nums) << endl;
    target = 11;
    nums = {1, 1, 1, 1, 1, 1, 1, 1};
    cout << minSubArrayLen(target, nums) << endl;
}