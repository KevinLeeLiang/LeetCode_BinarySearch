//
// Created by garen_lee on 2025/6/23.
/**
  ******************************************************************************
  * @file           : L540_singleNonDuplicate.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/23
  ******************************************************************************
  */
//

#include "L540_singleNonDuplicate.h"

int L540_singleNonDuplicate::singleNonDuplicate(std::vector<int>& nums) {
    if (nums.size() == 1) {
        return nums[0];
    }
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == nums[mid ^ 1]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return nums[left];
}

void L540_singleNonDuplicate::test() {
    std::vector<int> nums = {1,1,2,3,3,4,4,8,8};
    std::cout << singleNonDuplicate(nums) << std::endl;
    nums = {3,3,7,7,10,11,11};
    std::cout << singleNonDuplicate(nums) << std::endl;
}