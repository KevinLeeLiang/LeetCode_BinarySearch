//
// Created by garen_lee on 2025/4/21.
/**
  ******************************************************************************
  * @file           : L352_SummaryRanges.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/21
  ******************************************************************************
  */
//

#include "L352_SummaryRanges.h"

void SummaryRanges::addNum(int value) {
    int left = value, right = value;
    auto it = intervals.upper_bound(value);
    if (it != intervals.begin() && (--it)->second + 1 < value){
        it++;
    }
    while (it != intervals.end() && value + 1 >= it->first) {
        left = min(left, it->first);
        right = max(right, it->second);
        it = intervals.erase(it);
    }
    intervals[left] = right;
}

vector<vector<int>> SummaryRanges::getIntervals() {
    vector<vector<int>> result;
    for (const auto& pair : intervals) {
        result.push_back({pair.first, pair.second});
    }
    return result;
}

void L352_SummaryRanges::test() {
    SummaryRanges summary_ranges;
    summary_ranges.addNum(1);
    vector<vector<int>> intervals = summary_ranges.getIntervals();
    print_vector_vector(intervals);
    summary_ranges.addNum(3);
    intervals = summary_ranges.getIntervals();
    print_vector_vector(intervals);
    summary_ranges.addNum(7);
    intervals = summary_ranges.getIntervals();
    print_vector_vector(intervals);
    summary_ranges.addNum(2);
    intervals = summary_ranges.getIntervals();
    print_vector_vector(intervals);
    summary_ranges.addNum(6);
    intervals = summary_ranges.getIntervals();
    print_vector_vector(intervals);
}