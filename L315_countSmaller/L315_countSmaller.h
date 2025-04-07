//
// Created by garen_lee on 2025/4/7.
/**
  ******************************************************************************
  * @file           : L315_countSmaller.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/7
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_L315_COUNTSMALLER_H
#define BINARYSEARCH_L315_COUNTSMALLER_H

#include "util.h"
class L315_countSmaller : public LeetcodeBinarySearch {
private:
    //原数组为nums，
    //将nums离散化，此处是排序+去重，转化为数组a
    vector<int> a;
    //将nums对应a的元素update到树状数组c
    vector<int> c;

    //resize树状数组大小
    void init(int len) {
        c.resize(len);
    }

    //lowbit为二进制中最低位的1的值
    int lowbit(int x) {
        return x & (-x);
    }

    //单点更新，从子节点更新到所有父节点(祖父节点等一直往上到上限c.size())
    void update(int pos) {
        while (pos < c.size()) {
            c[pos] += 1;
            pos += lowbit(pos);
        }
    }

    //查询，实际是求和[0,...,pos]，即求1~pos的元素数量
    //如c[8]，在update时，a[1],a[2],a[3],...,a[8]都会使c[8]增加一个value（该题中我们设置为1）
    //res += c[8]，然后8减去lowbit为0。
    //也可以拿c[6]举例，c[6] =a[5]+a[6]，lowbit后，c[4] = a[1]+a[2]+a[3]+a[4]
    int query(int pos) {
        int res = 0;
        while (pos) {
            res += c[pos];
            pos -= lowbit(pos);
        }
        return res;
    }

    //离散化处理
    void Discretization(vector<int>& nums) {
        //拷贝数组 [5,4,5,3,2,1,1,1,1,1]
        a.assign(nums.begin(), nums.end());
        //排序[1,1,1,1,1,2,3,4,5,5]
        sort(a.begin(), a.end());
        //去重[1,2,3,4,5]
        a.erase(unique(a.begin(), a.end()), a.end());
    }

    int getId(int x) {
        //lower_bound返回第一个不小于x的迭代器
        //[1,2,3,4,5]中1，减去begin()再加1，得到id（1-5）
        return lower_bound(a.begin(), a.end(), x) - a.begin() + 1;
    }
private:
    vector<int> countSmaller(vector<int> &nums);
public:
    L315_countSmaller() {a.clear();c.clear();}
    void test();
};


#endif //BINARYSEARCH_L315_COUNTSMALLER_H
