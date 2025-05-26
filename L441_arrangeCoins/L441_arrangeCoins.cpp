//
// Created by garen_lee on 2025/5/26.
/**
  ******************************************************************************
  * @file           : L441_arrangeCoins.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/26
  ******************************************************************************
  */
//

#include "L441_arrangeCoins.h"

int L441_arrangeCoins::arrangeCoins(int n) {
    int left = 1, right = n;
    while (left < right) {
        int mid = (right - left + 1) / 2 + left;
        long long sum = 1LL * (long long) mid * (mid + 1) / 2;
         if (sum <= n) {
            left = mid;
        } else {
            right = mid - 1;
        }
    }
    return left;
}

void L441_arrangeCoins::test() {
    int n = 5;
    int res = arrangeCoins(n);
    cout << res << endl;
    n = 8;
    res = arrangeCoins(n);
    cout << res << endl;
}