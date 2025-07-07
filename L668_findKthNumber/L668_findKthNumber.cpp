//
// Created by garen_lee on 2025/7/7.
/**
  ******************************************************************************
  * @file           : L668_findKthNumber.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/7
  ******************************************************************************
  */
//

#include "L668_findKthNumber.h"

int L668_findKthNumber::findKthNumber(int m, int n, int k) {
    int left = 1, right = m * n;
    while (left < right) {
        int x = left + (right - left) / 2;
        int count = x / n * n;
        for (int i = x / n + 1; i <= m; ++i) {
            count += x / i;
        }
        if (count >= k) {
            right = x;
        } else {
            left = x + 1;
        }
    }
    return left;
}

void L668_findKthNumber::test() {
    int m = 3, n = 3, k = 5;
    cout << findKthNumber(m, n, k) << endl;
    m = 2, n = 3, k = 6;
    cout << findKthNumber(m, n, k) << endl;
}