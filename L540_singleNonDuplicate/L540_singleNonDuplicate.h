//
// Created by garen_lee on 2025/6/23.
/**
  ******************************************************************************
  * @file           : L540_singleNonDuplicate.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/23
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L540_SINGLENONDUPLICATE_H
#define BINARYSEARCH_L540_SINGLENONDUPLICATE_H

#include "util.h"
class L540_singleNonDuplicate : public LeetcodeBinarySearch {
private:
    int singleNonDuplicate(vector<int>& nums);
public:
    L540_singleNonDuplicate() {}
    void test();
};


#endif //BINARYSEARCH_L540_SINGLENONDUPLICATE_H
