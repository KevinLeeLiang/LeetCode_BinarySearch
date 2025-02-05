//
// Created by garen_lee on 2025/2/5.
/**
  ******************************************************************************
  * @file           : L34_searchRange.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/5
  ******************************************************************************
  */
//

#include "L34_searchRange.h"

int L34_searchRange::binarySearch(vector<int>& nums, int target, bool lower) {
    int left = 0, right = (int)nums.size() - 1, ans = (int)nums.size();
    while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] > target || (lower && nums[mid] >= target)) {
            right = mid - 1;
            ans = mid;
        } else {
            left = mid + 1;
        }
    }
    return ans;
}
vector<int> L34_searchRange::searchRange(vector<int>& nums, int target) {
    int leftIdx = binarySearch(nums, target, true);
    int rightIdx = binarySearch(nums, target, false) - 1;
    if (leftIdx <= rightIdx && rightIdx < nums.size() && nums[leftIdx] == target && nums[rightIdx] == target) {
        return vector<int>{leftIdx, rightIdx};
    }
    return vector<int>{-1, -1};
}
void L34_searchRange::test(){
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    vector<int> result = searchRange(nums, target);
    print_vector(result);
    nums = {5,7,7,8,8,10};
    target = 6;
    result = searchRange(nums, target);
    print_vector(result);
    nums = {};
    target = 0;
    result = searchRange(nums, target);
    print_vector(result);
}