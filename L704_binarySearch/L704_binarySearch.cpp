//
// Created by garen_lee on 2025/7/7.
/**
  ******************************************************************************
  * @file           : L704_binarySearch.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/7
  ******************************************************************************
  */
//

#include "L704_binarySearch.h"

int L704_binarySearch::binarySearch(vector<int> &nums, int left, int right, int target) {
    if (left > right) {
        return -1;
    }
    int mid = (left + right) / 2;
    if (nums[mid] == target) {
        return mid;
    } else if (nums[mid] > target) {
        return binarySearch(nums, left, mid - 1, target);
    } else {
        return binarySearch(nums, mid + 1, right, target);
    }
}
int L704_binarySearch::search(vector<int> &nums, int target) {
    return binarySearch(nums, 0, nums.size() - 1, target);
}


void L704_binarySearch::test() {
    vector<int> nums = { -1, 0, 3, 5, 9, 12 };
    cout << search(nums, 9) << endl;

}