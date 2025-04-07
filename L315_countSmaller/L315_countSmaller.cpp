//
// Created by garen_lee on 2025/4/7.
/**
  ******************************************************************************
  * @file           : L315_countSmaller.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/7
  ******************************************************************************
  */
//

#include "L315_countSmaller.h"

vector<int> L315_countSmaller::countSmaller(vector<int> &nums) {
    vector<int> res;
    int n = nums.size();
    //题解是+5，其实+1就够了，树状数组中我们不使用0下标，所以需扩展1位空间
    //当然直接用n结果也是对的。这里再推敲推敲
    init(n+1);

    //将nums转化为a
    Discretization(nums);

    for (int i=n-1; i>=0; --i) {
        //倒序处理
        int id = getId(nums[i]);
        //查询严格小于id的元素数量，所以使用id-1
        res.push_back(query(id-1));
        //更新id，其实更新也可以提前，因为查询是id-1，所以更新操作不影响当前结果
        update(id);
    }
    //倒序处理再倒序回来。如果不是用push_back，直接用下标可以不用在这里再倒序
    reverse(res.begin(), res.end());
    return res;
}

void L315_countSmaller::test() {
    vector<int> nums = {5, 2, 6, 1};
    vector<int> res = countSmaller(nums);
    print_vector(res);
    nums = {-1};
    res = countSmaller(nums);
    print_vector(res);
    nums = {-1, -1};
    res = countSmaller(nums);
    print_vector(res);
}