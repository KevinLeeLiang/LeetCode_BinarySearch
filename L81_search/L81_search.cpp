//
// Created by garen_lee on 2025/2/17.
/**
  ******************************************************************************
  * @file           : L81_search.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/17
  ******************************************************************************
  */
//

#include "L81_search.h"

bool L81_search::search(vector<int>& nums, int target) {
    int n = nums.size();
    if (n == 0) {
        return false;
    }
    if (n == 1) {
        return nums[0] == target;
    }
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (nums[mid] == target) {
            return true;
        }
        if (nums[l] == nums[mid] && nums[r] == nums[mid]){
            l++;
            r--;
        } else if (nums[l] <= nums[mid]) {
            if (nums[l] <= target && target < nums[mid])
                r = mid - 1;
            else
                l = mid + 1;
        } else {
            if (nums[mid] < target && target <= nums[r])
                l = mid + 1;
            else
                r = mid - 1;
        }
    }
    return false;
}

void L81_search::test(){
    vector<int> nums = {2,5,6,0,0,1,2};
    int target = 0;
    int result = search(nums, target);
    cout << result << endl;
    nums = {2,5,6,0,0,1,2};
    target = 3;
    result = search(nums, target);
    cout << result << endl;
}