// Created by garen_lee on 2025/3/3.
/**
  ******************************************************************************
  * @file           : L209_minSubArrayLen.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/3
// Created by garen-lee on 2025/3/10.
/**
  ******************************************************************************
  * @file           : L209_minSubArrayLen.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/10
  ******************************************************************************
  */

#include "L209_minSubArrayLen.h"

int L209_minSubArrayLen::minSubArrayLen(int target, vector<int> &nums) {
    int n = nums.size();
    if (n == 0) {
        return 0;
    }
    int ans = INT_MAX;
    vector<int> sums(n + 1, 0);
    // 为了方便计算，令 size = n + 1
    // sums[0] = 0 意味着前 0 个元素的前缀和为 0
    // sums[1] = A[0] 前 1 个元素的前缀和为 A[0]
    // 以此类推
    for (int i = 1; i <= n; i++) {
        sums[i] = sums[i - 1] + nums[i - 1];
    }
    for (int i = 1; i <= n; i++) {
        int s = target + sums[i - 1];
        auto bound = lower_bound(sums.begin(), sums.end(), s);
        if (bound != sums.end()) {
            ans = min(ans, static_cast<int>((bound - sums.begin()) - (i - 1)));
        }
    }
    return ans == INT_MAX ? 0 : ans;
}

void L209_minSubArrayLen::test() {
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    int target = 7;
    int res = minSubArrayLen(target, nums);
    cout << res << endl;
    nums = {1, 4, 4};
    target = 4;
    res = minSubArrayLen(target, nums);
    cout << res << endl;
    nums = {1, 1, 1, 1, 1, 1, 1, 1};
    target = 11;
    res = minSubArrayLen(target, nums);
    cout << res << endl;
}