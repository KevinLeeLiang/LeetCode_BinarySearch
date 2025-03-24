//
// Created by garen_lee on 2025/3/24.
/**
  ******************************************************************************
  * @file           : L275_hIndex.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/24
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L275_HINDEX_H
#define BINARYSEARCH_L275_HINDEX_H

#include "util.h"
class L275_hIndex : public LeetcodeBinarySearch {
private:
    int hIndex(vector<int>& citations);
public:
    L275_hIndex() {}
    void test();
};


#endif //BINARYSEARCH_L275_HINDEX_H
