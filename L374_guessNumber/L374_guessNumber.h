//
// Created by garen-lee on 2025/5/5.
/**
  ******************************************************************************
  * @file           : L374_guessNumber.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/5
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L374_GUESSNUMBER_H
#define BINARYSEARCH_L374_GUESSNUMBER_H

#include "util.h"
class L374_guessNumber : public LeetcodeBinarySearch {
private:
    int guessNumber(int n);
    int guess(int num);
public:
    L374_guessNumber() {}
    void test();
};


#endif //BINARYSEARCH_L374_GUESSNUMBER_H
