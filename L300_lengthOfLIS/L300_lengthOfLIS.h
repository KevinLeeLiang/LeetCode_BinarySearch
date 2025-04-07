//
// Created by garen_lee on 2025/4/7.
/**
  ******************************************************************************
  * @file           : L300_lengthOfLIS.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/7
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L300_LENGTHOFLIS_H
#define BINARYSEARCH_L300_LENGTHOFLIS_H

#include "util.h"
class L300_lengthOfLIS : public LeetcodeBinarySearch {
private:
    int lengthOfLIS(vector<int>& nums);
public:
    L300_lengthOfLIS() {}
    void test();
};


#endif //BINARYSEARCH_L300_LENGTHOFLIS_H
