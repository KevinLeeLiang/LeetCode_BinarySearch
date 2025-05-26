//
// Created by garen_lee on 2025/5/26.
/**
  ******************************************************************************
  * @file           : L456_find132pattern.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/26
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L456_FIND132PATTERN_H
#define BINARYSEARCH_L456_FIND132PATTERN_H

#include "util.h"
class L456_find132pattern : public LeetcodeBinarySearch {
private:
    bool find132pattern(vector<int> &nums);
public:
    L456_find132pattern() {}
    void test();
};


#endif //BINARYSEARCH_L456_FIND132PATTERN_H
