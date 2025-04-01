//
// Created by garen_lee on 2025/3/31.
/**
  ******************************************************************************
  * @file           : L278_firstBadVersion.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/31
  ******************************************************************************
  */
//

#include "L278_firstBadVersion.h"

int bad = 0;

bool L278_firstBadVersion::isBadVersion(int version) {
    if (version >= bad) {
        return true;
    }
    return false;
}

int L278_firstBadVersion::firstBadVersion(int n) {
    if (n == 1) {
        return 1;
    }
    int left = 1, right = n;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (isBadVersion(mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}

void L278_firstBadVersion::test() {
    int n = 5;
    bad = 4;
    cout << firstBadVersion(n) << endl;
    n = 1;
    bad = 1;
    cout << firstBadVersion(n) << endl;
}