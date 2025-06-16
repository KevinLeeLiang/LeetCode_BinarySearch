//
// Created by garen_lee on 2025/6/16.
/**
  ******************************************************************************
  * @file           : L528_RandomlySelectByWeight.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/16
  ******************************************************************************
  */
//

#include "L528_RandomlySelectByWeight.h"
namespace L528 {
class Solution {
public:
    Solution(vector<int> &w) : gen(random_device{}()), dis(1, accumulate(w.begin(), w.end(), 0)) {
        partial_sum(w.begin(), w.end(), back_inserter(pre));
    }

    int pickIndex() {
        int x = dis(gen);
        return lower_bound(pre.begin(), pre.end(), x) - pre.begin();
    }
private:
    mt19937 gen;
    uniform_int_distribution<int> dis;
    vector<int> pre;
};
}

void L528_RandomlySelectByWeight::test() {
    vector<int> w = {1};
    L528::Solution obj(w);
    cout << obj.pickIndex() << endl;
    cout << "++++++++" << endl;
    w = {1, 3};
    L528::Solution obj2(w);
    cout << obj2.pickIndex() << endl;
    cout << obj2.pickIndex() << endl;
    cout << obj2.pickIndex() << endl;
    cout << obj2.pickIndex() << endl;
    cout << obj2.pickIndex() << endl;
}