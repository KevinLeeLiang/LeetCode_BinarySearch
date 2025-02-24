//
// Created by garen_lee on 2025/2/24.
/**
  ******************************************************************************
  * @file           : L162_findPeakElement.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/24
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L162_FINDPEAKELEMENT_H
#define BINARYSEARCH_L162_FINDPEAKELEMENT_H

#include "util.h"
class L162_findPeakElement : public LeetcodeBinarySearch{
private:
    int findPeakElement(vector<int>& nums);
public:
    L162_findPeakElement() {}
    void test();
};


#endif //BINARYSEARCH_L162_FINDPEAKELEMENT_H
