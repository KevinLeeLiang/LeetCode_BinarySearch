//
// Created by garen_lee on 2025/2/10.
/**
  ******************************************************************************
  * @file           : L69_mySqrt.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/10
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L69_MYSQRT_H
#define BINARYSEARCH_L69_MYSQRT_H

#include "util.h"
class L69_mySqrt : public LeetcodeBinarySearch{
private:
    int mySqrt(int x);
    int binarySearch(int left, int right, int x);
public:
    L69_mySqrt(){}
    void test();
};


#endif //BINARYSEARCH_L69_MYSQRT_H
