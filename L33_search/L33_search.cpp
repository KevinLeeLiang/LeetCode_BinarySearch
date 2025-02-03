//
// Created by garen-lee on 2025/2/3.
/**
  ******************************************************************************
  * @file           : L33_search.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/3
  ******************************************************************************
  */
//

#include "L33_search.h"
int L33_search::search(vector<int> &nums, int target) {
    int n = (int)nums.size();
    if (!n) {
        return -1;
    }
    if (n == 1) {
        return nums[0] == target ? 0 : -1;
    }
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        if (nums[0] <= nums[mid]) {
            if (nums[0] <= target && target < nums[mid]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        } else {
            if (nums[mid] < target && target <= nums[n - 1]) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
    }
    return -1;
}

void L33_search::test() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int res = search(nums, target);
    cout << "res: " << res << endl;
    nums = {4, 5, 6, 7, 0, 1, 2};
    target = 3;
    res = search(nums, target);
    cout << "res: " << res << endl;
    nums = {1};
    target = 0;
    res = search(nums, target);
    cout << "res: " << res << endl;
}