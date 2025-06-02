//
// Created by garen-lee on 2025/6/2.
/**
  ******************************************************************************
  * @file           : L475_findRadius.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/2
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L475_FINDRADIUS_H
#define BINARYSEARCH_L475_FINDRADIUS_H

#include "util.h"
class L475_findRadius : public LeetcodeBinarySearch {
private:
    int findRadius(vector<int>& houses, vector<int>& heaters);
public:
    L475_findRadius() {}
    void test();
};


#endif //BINARYSEARCH_L475_FINDRADIUS_H
