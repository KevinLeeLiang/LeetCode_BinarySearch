//
// Created by garen-lee on 2025/5/5.
/**
  ******************************************************************************
  * @file           : L367_isPerfectSquare.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/5
  ******************************************************************************
  */
//

#include "L367_isPerfectSquare.h"

bool L367_isPerfectSquare::isPerfectSquare(int num) {
    if (num == 1) {
        return true;
    }
    int left = 1, right = num / 2;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (mid * mid == num) {
            return true;
        } else if (mid * mid < num) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

void L367_isPerfectSquare::test() {
    cout << isPerfectSquare(16) << endl;
    cout << isPerfectSquare(14) << endl;
}