//
// Created by garen_lee on 2025/5/12.
/**
  ******************************************************************************
  * @file           : L400_findNthDigit.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/12
  ******************************************************************************
  */
//

#include "L400_findNthDigit.h"

int L400_findNthDigit::findNthDigit(int n) {
    int d = 1, count = 9;
    while (n > (long)d * count) {
        n -= d * count;
        d++;
        count *= 10;
    }
    int index = n - 1;
    int start = (int) pow(10, d - 1);
    int num = start + index / d;
    int digitIndex = index % d;
    int digit = (num / (int) (pow(10, d - digitIndex - 1))) % 10;
    return digit;
}

void L400_findNthDigit::test(){
    int n = 3;
    int res = findNthDigit(n);
    cout << res << endl;
    n = 11;
    res = findNthDigit(n);
    cout << res << endl;
}