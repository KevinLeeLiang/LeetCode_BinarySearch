//
// Created by garen_lee on 2025/2/5.
/**
  ******************************************************************************
  * @file           : L35_searchInsert.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/5
  ******************************************************************************
  */
//

#include "L35_searchInsert.h"

int L35_searchInsert::search(vector<int> &nums, int left, int right, int target) {
    if (left > right)
        return left;
    int mid = (left + right) / 2;
    if (nums[mid] == target)
        return mid;
    else if (nums[mid] > target)
        return search(nums, left, mid - 1, target);
    else
        return search(nums, mid + 1, right, target);
}

int L35_searchInsert::searchInsert(vector<int> &nums, int target) {
    int left = 0, right = nums.size() - 1;
    if (left == right == 1){
        if (target > nums[left])
            return 1;
        else
            return 0;
    }
    return search(nums, left, right, target);
}

void L35_searchInsert::test() {
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    int result = searchInsert(nums, target);
    cout << "result: " << result << endl;
    nums = {1, 3, 5, 6};
    target = 2;
    result = searchInsert(nums, target);
    cout << "result: " << result << endl;
    nums = {1, 3, 5, 6};
    target = 7;
    result = searchInsert(nums, target);
    cout << "result: " << result << endl;
}