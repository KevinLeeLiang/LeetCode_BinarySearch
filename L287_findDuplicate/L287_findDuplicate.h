//
// Created by garen_lee on 2025/3/31.
/**
  ******************************************************************************
  * @file           : L287_findDuplicate.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/31
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L287_FINDDUPLICATE_H
#define BINARYSEARCH_L287_FINDDUPLICATE_H

#include "util.h"
class L287_findDuplicate : public LeetcodeBinarySearch {
private:
    int findDuplicate(vector<int>& nums);
public:
    L287_findDuplicate() {}
    void test();
};


#endif //BINARYSEARCH_L287_FINDDUPLICATE_H
