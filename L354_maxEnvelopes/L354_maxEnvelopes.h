//
// Created by garen_lee on 2025/4/28.
/**
  ******************************************************************************
  * @file           : L354_maxEnvelopes.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/28
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L354_MAXENVELOPES_H
#define BINARYSEARCH_L354_MAXENVELOPES_H

#include "util.h"
class L354_maxEnvelopes : public LeetcodeBinarySearch {
private:
    int maxEnvelopes(vector<vector<int>>& envelopes);
public:
    L354_maxEnvelopes() {}
    void test();
};


#endif //BINARYSEARCH_L354_MAXENVELOPES_H
