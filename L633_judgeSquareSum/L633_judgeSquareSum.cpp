//
// Created by garen_lee on 2025/6/30.
/**
  ******************************************************************************
  * @file           : L633_judgeSquareSum.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/30
  ******************************************************************************
  */
//

#include "L633_judgeSquareSum.h"

bool L633_judgeSquareSum::judgeSquareSum(int c) {
    int left = 0, right = sqrt(c);
    while (left <= right) {
        int sum = pow(left, 2) + pow(right, 2);
        if (sum == c) {
            return true;
        } else if (sum < c) {
            left++;
        } else {
            right--;
        }
    }
    return false;
}

void L633_judgeSquareSum::test() {
    int c = 5;
    cout << judgeSquareSum(c) << endl;
    c = 3;
    cout << judgeSquareSum(c) << endl;
}