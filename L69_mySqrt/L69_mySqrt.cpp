//
// Created by garen_lee on 2025/2/10.
/**
  ******************************************************************************
  * @file           : L69_mySqrt.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/10
  ******************************************************************************
  */
//

#include "L69_mySqrt.h"
int L69_mySqrt::binarySearch(int x, int left, int right)
{
    if(left > right)
        return -1;
    int mid = left + (right - left) / 2;
    if(mid * mid == x)
        return mid;
    else if(mid * mid > x)
        return binarySearch(x, left, mid - 1);
    else
        return binarySearch(x, mid + 1, right);
}
int L69_mySqrt::mySqrt(int x){
    int l = 0, r = x, ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if ((long long)mid * mid <= x) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}

void L69_mySqrt::test()
{
    int x = 4;
    int res = mySqrt(x);
    cout << res << endl;
    x = 8;
    res = mySqrt(x);
    cout << res << endl;

}