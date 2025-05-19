//
// Created by garen_lee on 2025/5/19.
/**
  ******************************************************************************
  * @file           : L436_findRightInterval.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/19
  ******************************************************************************
  */
//

#include "L436_findRightInterval.h"

vector<int> L436_findRightInterval::findRightInterval(vector<vector<int>>& intervals) {
    vector<pair<int, int>>starts_intervals;
    int n = intervals.size();
    for (int i = 0; i < n; ++i) {
        starts_intervals.push_back({intervals[i][0], i});
    }
    sort(starts_intervals.begin(), starts_intervals.end());
    vector<int>result(n, -1);
    for (int i = 0; i < n; ++i) {
        auto it = lower_bound(starts_intervals.begin(), starts_intervals.end(), intervals[i][1]);
        if (it != starts_intervals.end()) {
            result[i] = it->second;
        }
    }
    return result;
}

void L436_findRightInterval::test() {
    vector<vector<int>>intervals = {{1, 2}};
    vector<int>result = findRightInterval(intervals);
    print_vector(result);
    intervals = {{3, 4}, {2, 3}, {1, 2}};
    result = findRightInterval(intervals);
    print_vector(result);
    intervals = {{1, 4}, {2, 3}, {3, 4}};
    result = findRightInterval(intervals);
    print_vector(result);
}