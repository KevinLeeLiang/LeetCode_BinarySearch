//
// Created by garen_lee on 2025/6/23.
/**
  ******************************************************************************
  * @file           : L611_triangeNumber.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/23
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L611_TRIANGENUMBER_H
#define BINARYSEARCH_L611_TRIANGENUMBER_H

#include "util.h"
class L611_triangeNumber : public LeetcodeBinarySearch {
private:
    int triangleNumber(vector<int>& nums);
    bool check(int &a, int &b, int &c);
public:
    L611_triangeNumber() {}
    void test();
};


#endif //BINARYSEARCH_L611_TRIANGENUMBER_H
