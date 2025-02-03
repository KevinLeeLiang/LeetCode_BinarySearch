//
// Created by garen-lee on 2025/2/3.
/**
  ******************************************************************************
  * @file           : L4_findMedianSortedArrays.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/3
  ******************************************************************************
  */
//

#include "L4_findMedianSortedArrays.h"

int L4_findMedianSortedArrays::getKthElement(const vector<int>& nums1, const vector<int>& nums2, int k) {
    /* 主要思路：要找到第 k (k>1) 小的元素，那么就取 pivot1 = nums1[k/2-1] 和 pivot2 = nums2[k/2-1] 进行比较 */
    /* 这里的 "/" 表示整除
     * nums1 中小于等于 pivot1 的元素有 nums1[0 .. k/2-2] 共计 k/2-1 个
     * nums2 中小于等于 pivot2 的元素有 nums2[0 .. k/2-2] 共计 k/2-1 个
     * 取 pivot = min(pivot1, pivot2)，两个数组中小于等于 pivot 的元素共计不会超过 (k/2-1) + (k/2-1) <= k-2 个
     * 这样 pivot 本身最大也只能是第 k-1 小的元素
     * 如果 pivot = pivot1，那么 nums1[0 .. k/2-1] 都不可能是第 k 小的元素。把这些元素全部 "删除"，剩下的作为新的 nums1 数组
     * 如果 pivot = pivot2，那么 nums2[0 .. k/2-1] 都不可能是第 k 小的元素。把这些元素全部 "删除"，剩下的作为新的 nums2 数组
     * 由于我们 "删除" 了一些元素（这些元素都比第 k 小的元素要小），因此需要修改 k 的值，减去删除的数的个数
     */

    int i = 0, j = 0;
    int m = nums1.size(), n = nums2.size();
    while (true) {
        // 边界情况
        if (i == m) {
            return nums2[j + k - 1];
        }
        if (j == n) {
            return nums1[i + k - 1];
        }
        if (k == 1) {
            return min(nums1[i], nums2[j]);
        }

        // 正常情况
        int newIndex1 = min(i + k / 2 - 1, m - 1);
        int newIndex2 = min(j + k / 2 - 1, n - 1);
        int pivot1 = nums1[newIndex1];
        int pivot2 = nums2[newIndex2];
        if (pivot1 <= pivot2) {
            k -= newIndex1 - i + 1;
            i = newIndex1 + 1;
        }
        else {
            k -= newIndex2 - j + 1;
            j = newIndex2 + 1;
        }
    }
}
double L4_findMedianSortedArrays::findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
    int n1 = nums1.size();
    int n2 = nums2.size();
    if ((n1 + n2) % 2 == 0) {
        return (getKthElement(nums1, nums2, (n1 + n2) / 2) + getKthElement(nums1, nums2, (n1 + n2) / 2 + 1)) / 2.0;
    } else {
        return getKthElement(nums1, nums2, (n1 + n2) / 2 + 1);
    }

}

void L4_findMedianSortedArrays::test() {
    vector<int>nums1, nums2;
    nums1 = {1, 3};
    nums2 = {2};
    cout << findMedianSortedArrays(nums1, nums2) << endl;
    nums1 = {1, 2};
    nums2 = {3, 4};
    cout << findMedianSortedArrays(nums1, nums2) << endl;
    nums1 = {1, 2};
    nums2 = {3, 4, 5};
    cout << findMedianSortedArrays(nums1, nums2) << endl;
}