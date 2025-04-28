//
// Created by garen_lee on 2025/4/28.
/**
  ******************************************************************************
  * @file           : L354_maxEnvelopes.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/28
  ******************************************************************************
  */
//

#include "L354_maxEnvelopes.h"

bool compare(const vector<int>& a, const vector<int>& b) {
    if (a[0] == b[0]) {
        return a[1] > b[1];
    } else {
        return a[0] < b[0];
    }
}

int L354_maxEnvelopes::maxEnvelopes(vector<vector<int>>& envelopes) {
    if (envelopes.size() == 0) {
        return 0;
    } else if (envelopes.size() == 1) {
        return 1;
    } else {
        int n = envelopes.size();
        sort(envelopes.begin(), envelopes.end(), compare);
        vector<int> f = {envelopes[0][1]};
        for (int i = 1; i < n; ++i) {
            int num = envelopes[i][1];
            if (num > f.back()) {
                f.push_back(num);
            }
            else {
                auto it = lower_bound(f.begin(), f.end(), num);
                *it = num;
            }
        }
        return f.size();
    }
}

void L354_maxEnvelopes::test() {
    vector<vector<int>> envelopes = {{5,4},{6,4},{6,7},{2,3}};
    cout << maxEnvelopes(envelopes) << endl;
    envelopes = {{1,1},{1,1},{1,1}};
    cout << maxEnvelopes(envelopes) << endl;
}