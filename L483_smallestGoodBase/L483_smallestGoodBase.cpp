//
// Created by garen-lee on 2025/6/2.
/**
  ******************************************************************************
  * @file           : L483_smallestGoodBase.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/2
  ******************************************************************************
  */
//

#include "L483_smallestGoodBase.h"

string L483_smallestGoodBase::smallestGoodBase(string n) {
    long long nVal = stoll(n);
    int mMax = floor(log(nVal) / log(2));
    for (int m = mMax; m > 1; m--) {
        int k = pow(nVal, 1.0 / m);
        long mul = 1, sum = 1;
        for (int i = 0; i < m; i++) {
            mul *= k;
            sum += mul;
        }
        if (sum == nVal) {
            return to_string(k);
        }
    }
    return to_string(nVal - 1);

}

void L483_smallestGoodBase::test(){
    string s = "13";
    cout << "result: " << smallestGoodBase(s) << endl;
    s = "4681";
    cout << "result: " << smallestGoodBase(s) << endl;
    s = "1000000000000000000";
    cout << "result: " << smallestGoodBase(s) << endl;
}