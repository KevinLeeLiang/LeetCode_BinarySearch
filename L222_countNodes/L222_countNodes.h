//
// Created by garen_lee on 2025/3/17.
/**
  ******************************************************************************
  * @file           : L222_countNodes.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/17
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L222_COUNTNODES_H
#define BINARYSEARCH_L222_COUNTNODES_H

#include "util.h"
class L222_countNodes : public LeetcodeBinarySearch {
private:
    int countNodes(TreeNode* root);
    bool exists(TreeNode* root, int level, int k);
public:
    L222_countNodes(){}
    void test();
};


#endif //BINARYSEARCH_L222_COUNTNODES_H
