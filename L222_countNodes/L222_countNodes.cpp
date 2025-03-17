//
// Created by garen_lee on 2025/3/17.
/**
  ******************************************************************************
  * @file           : L222_countNodes.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/17
  ******************************************************************************
  */
//

#include "L222_countNodes.h"
bool L222_countNodes::exists(TreeNode* root, int level, int k) {
    int bits = 1 << (level - 1);
    TreeNode* node = root;
    while (node != nullptr && bits > 0) {
        if (!(bits & k)) {
            node = node->left;
        } else {
            node = node->right;
        }
        bits >>= 1;
    }
    return node != nullptr;
}

int L222_countNodes::countNodes(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    int level = 0;
    TreeNode* node = root;
    while (node->left != nullptr) {
        level++;
        node = node->left;
    }
    int low = 1 << level, high = (1 << (level + 1)) - 1;
    while (low < high) {
        int mid = (high - low + 1) / 2 + low;
        if (exists(root, level, mid)) {
            low = mid;
        } else {
            high = mid - 1;
        }
    }
    return low;
}

void L222_countNodes::test() {
    vector<int>nums = {1, 2, 3, 4, 5, 6};
    TreeNode* root = create_treenode(nums, true);
    cout << countNodes(root) << endl;
    nums = {};
    root = create_treenode(nums, true);
    cout << countNodes(root) << endl;
    nums = {1};
    root = create_treenode(nums, true);
    cout << countNodes(root) << endl;
}