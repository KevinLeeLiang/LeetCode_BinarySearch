//
// Created by garen_lee on 2025/6/30.
/**
  ******************************************************************************
  * @file           : L658_findClosestELements.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/30
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L658_FINDCLOSESTELEMENTS_H
#define BINARYSEARCH_L658_FINDCLOSESTELEMENTS_H

#include "util.h"
class L658_findClosestELements : public LeetcodeBinarySearch {
private:
    vector<int> findClosestElements(vector<int>& arr, int k, int x);
public:
    L658_findClosestELements() {}
    void test();
};


#endif //BINARYSEARCH_L658_FINDCLOSESTELEMENTS_H
