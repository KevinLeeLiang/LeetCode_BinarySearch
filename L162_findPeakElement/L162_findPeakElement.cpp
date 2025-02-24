//
// Created by garen_lee on 2025/2/24.
/**
  ******************************************************************************
  * @file           : L162_findPeakElement.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/24
  ******************************************************************************
  */
//

#include "L162_findPeakElement.h"
int L162_findPeakElement::findPeakElement(vector<int> &nums) {
    int n = nums.size();

    // 辅助函数，输入下标 i，返回一个二元组 (0/1, nums[i])
    // 方便处理 nums[-1] 以及 nums[n] 的边界情况
//    auto get = [&](int i) -> pair<int, int> {
//        if (i == -1 || i == n) {
//            return {0, 0};
//        }
//        return {1, nums[i]};
//    };

//    if (nums[nums.size() - 1] > nums[nums.size() - 2])
//        return nums.size() - 1;
//    int left = 0, right = n - 1, ans = -1;
//    while (left <= right) {
//        int mid = (left + right) / 2;
//        if (get(mid - 1) < get(mid) && get(mid) > get(mid + 1)) {
//            ans = mid;
//            break;
//        }
//        if (get(mid) < get(mid + 1)) {
//            left = mid + 1;
//        }
//        else {
//            right = mid - 1;
//        }
//    }
    if (nums.size() < 2)
        return 0;
    if (nums[0] > nums[1]) {
        return 0;
    }
    if (nums[n - 1] > nums[n - 2])
        return n - 1;
    int left = 1, right = n - 2, ans = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
            ans = mid;
            break;
        }
        if (nums[mid] < nums[mid + 1]) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return ans;
}
void L162_findPeakElement::test() {
    vector<int>nums;
    nums = {1,2,3,1};
    cout << findPeakElement(nums) << endl;
    nums = {1,2,1,3,5,6,4};
    cout << findPeakElement(nums) << endl;
    nums = {1, 2};
    cout << findPeakElement(nums) << endl;
}