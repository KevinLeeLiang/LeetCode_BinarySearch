//
// Created by garen_lee on 2025/6/30.
/**
  ******************************************************************************
  * @file           : L658_findClosestELements.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/30
  ******************************************************************************
  */
//

#include "L658_findClosestELements.h"

vector<int> L658_findClosestELements::findClosestElements(vector<int> &arr, int k, int x) {
    if (arr.size() == k) {
        return arr;
    }
    int left = 0, right = arr.size() - k;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (x - arr[mid] > arr[mid + k] - x) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return vector<int>(arr.begin() + left, arr.begin() + left + k);
}

void L658_findClosestELements::test() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    int x = 3;
    vector<int> ans = findClosestElements(arr, k, x);
    print_vector(ans);
    arr = {1, 1, 2, 3, 4, 5};
    k = 4;
    x = -1;
    ans = findClosestElements(arr, k, x);
    print_vector(ans);
}