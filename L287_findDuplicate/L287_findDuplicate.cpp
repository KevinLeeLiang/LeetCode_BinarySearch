//
// Created by garen_lee on 2025/3/31.
/**
  ******************************************************************************
  * @file           : L287_findDuplicate.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/31
  ******************************************************************************
  */
//

#include "L287_findDuplicate.h"

int L287_findDuplicate::findDuplicate(vector<int> &nums) {
    int n = nums.size();
    int l = 1, r = n - 1, ans = -1;
    while (l <= r) {
        int mid = (l + r) >> 1;
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            cnt += nums[i] <= mid;
        }
        if (cnt <= mid) {
            l = mid + 1;
        } else {
            r = mid - 1;
            ans = mid;
        }
    }
    return ans;
}

void L287_findDuplicate::test() {
    vector<int> nums = {1, 3, 4, 2, 2};
    int res = findDuplicate(nums);
    cout << res << endl;
    nums = {3, 1, 3, 4, 2};
    res = findDuplicate(nums);
    cout << res << endl;
}