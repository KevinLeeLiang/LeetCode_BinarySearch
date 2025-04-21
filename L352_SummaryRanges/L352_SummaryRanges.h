//
// Created by garen_lee on 2025/4/21.
/**
  ******************************************************************************
  * @file           : L352_SummaryRanges.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/21
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L352_SUMMARYRANGES_H
#define BINARYSEARCH_L352_SUMMARYRANGES_H

#include "util.h"

class SummaryRanges {
private:
    map<int, int>intervals;
public:
    SummaryRanges() {}
    void addNum(int value);
    vector<vector<int>> getIntervals();
};

class L352_SummaryRanges : public LeetcodeBinarySearch {
public:
    L352_SummaryRanges() {}
    void test();
};


#endif //BINARYSEARCH_L352_SUMMARYRANGES_H
