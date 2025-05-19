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
    vector<pair<int, int>>start_intervals;
    int n = intervals.size();
    for (int i = 0; i < n; i++) {
        start_intervals.emplace_back(intervals[i][0], i);
    }
    sort(start_intervals.begin(), start_intervals.end());
    vector<int>ans(n, -1);
    for (int i = 0; i < n; i++) {
        auto it = lower_bound(start_intervals.begin(), start_intervals.end(), make_pair(intervals[i][1], 0));
        if (it != start_intervals.end()) {
            ans[i] = it->second;
        }
    }
    return ans;
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