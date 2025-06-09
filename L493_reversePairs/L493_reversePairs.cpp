//
// Created by garen_lee on 2025/6/9.
/**
  ******************************************************************************
  * @file           : L493_reversePairs.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/9
  ******************************************************************************
  */
//

#include "L493_reversePairs.h"

int L493_reversePairs::reversePairsRecursive(vector<int>& nums, int left, int right) {
    if (left == right) {
        return 0;
    } else {
        int mid = (left + right) / 2;
        int n1 = reversePairsRecursive(nums, left, mid);
        int n2 = reversePairsRecursive(nums, mid + 1, right);
        int ret = n1 + n2;

        // 首先统计下标对的数量
        int i = left;
        int j = mid + 1;
        while (i <= mid) {
            while (j <= right && (long long)nums[i] > 2 * (long long)nums[j]) j++;
            ret += (j - mid - 1);
            i++;
        }

        // 随后合并两个排序数组
        vector<int> sorted(right - left + 1);
        int p1 = left, p2 = mid + 1;
        int p = 0;
        while (p1 <= mid || p2 <= right) {
            if (p1 > mid) {
                sorted[p++] = nums[p2++];
            } else if (p2 > right) {
                sorted[p++] = nums[p1++];
            } else {
                if (nums[p1] < nums[p2]) {
                    sorted[p++] = nums[p1++];
                } else {
                    sorted[p++] = nums[p2++];
                }
            }
        }
        for (int i = 0; i < sorted.size(); i++) {
            nums[left + i] = sorted[i];
        }
        return ret;
    }
}

int L493_reversePairs::reversePairs(vector<int> &nums) {
    if (nums.size() == 0) return 0;
    return reversePairsRecursive(nums, 0, nums.size() - 1);
}

//int L493_reversePairs::reversePairs(vector<int> &nums) {
//    if (nums.size() == 0) return 0;
//    vector<pair<int, int>> sorted;
//    for (int i = 0; i < nums.size(); i++) {
//        sorted.push_back(make_pair(nums[i], i));
//    }
//    sort(sorted.begin(), sorted.end(), [](pair<int, int> &a, pair<int, int> &b) {
//        if (a.first == b.first) {
//            return a.second > b.second;
//        }
//        return a.first < b.first;
//    });
//    int ret = 0;
//    for (int i = 0; i < sorted.size(); i++) {
//        int j = i + 1;
//        while (j < sorted.size()) {
//            if (sorted[j].first > (long long) 2*sorted[i].first && sorted[j].second < sorted[i].second)
//                ret += 1;
//            j++;
//        }
//    }
//    return ret;
//}

void L493_reversePairs::test() {
    vector<int> nums = {1, 3, 2, 3, 1};
    cout << reversePairs(nums) << endl;
    nums = {2, 4, 3, 5, 1};
    cout << reversePairs(nums) << endl;
    nums = {-5,-5};
    cout <<  reversePairs(nums) << endl;
}