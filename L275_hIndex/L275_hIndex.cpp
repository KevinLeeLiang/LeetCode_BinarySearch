//
// Created by garen_lee on 2025/3/24.
/**
  ******************************************************************************
  * @file           : L275_hIndex.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/24
  ******************************************************************************
  */
//

#include "L275_hIndex.h"

int L275_hIndex::hIndex(vector<int> &citations) {
    int n = citations.size();
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (citations[mid] >= n - mid) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return n - left;
}

void L275_hIndex::test() {
    vector<int> nums = {0, 1, 3, 5, 6};
    int result = hIndex(nums);
    cout << "result: " << result << endl;
    nums = {1, 2, 100};
    result = hIndex(nums);
    cout << "result: " << result << endl;
}