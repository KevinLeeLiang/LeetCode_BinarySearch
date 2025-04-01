//
// Created by garen_lee on 2025/3/31.
/**
  ******************************************************************************
  * @file           : L278_firstBadVersion.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/31
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L278_FIRSTBADVERSION_H
#define BINARYSEARCH_L278_FIRSTBADVERSION_H

#include "util.h"
class L278_firstBadVersion : public LeetcodeBinarySearch {
private:
    int firstBadVersion(int n);
    bool isBadVersion(int version);
public:
    L278_firstBadVersion() {}
    void test();
};


#endif //BINARYSEARCH_L278_FIRSTBADVERSION_H
