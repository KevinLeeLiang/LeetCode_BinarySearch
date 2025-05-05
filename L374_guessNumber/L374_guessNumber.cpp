//
// Created by garen-lee on 2025/5/5.
/**
  ******************************************************************************
  * @file           : L374_guessNumber.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/5
  ******************************************************************************
  */
//

#include "L374_guessNumber.h"

int L374_guessNumber::guess(int num) {
    if (num == 6) {
        return 0;
    } else if (num > 6) {
        return -1;
    } else {
        return 1;
    }
}

int L374_guessNumber::guessNumber(int n) {
    int left = 1, right = n;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (guess(mid) == 0) {
            return mid;
        } else if (guess(mid) == -1) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return left;
}

void L374_guessNumber::test() {
    int n = 10;
    cout << guessNumber(n) << endl;
    cout << guessNumber(1) << endl;
    cout << guessNumber(2) << endl;
}