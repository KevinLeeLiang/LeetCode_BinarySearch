# LeetCode_BinarySearch

LeetCode二分法搜索算法题的解题仓库

[LeetCode_BinarySearch](https://github.com/KevinLeeLiang/LeetCode_BinarySearch)

用于二分法搜索算法专项训练

[4. 寻找两个正序数组中的中位数](https://leetcode.cn/problems/median-of-two-sorted-arrays/description/?envType=problem-list-v2&envId=binary-search) : [L4_findMedianSortedArrays](L4_findMedianSortedArrays)

[33. 搜索旋转排序数组](https://leetcode.cn/problems/search-in-rotated-sorted-array/description/?envType=problem-list-v2&envId=binary-search) : [L33_search](L33_search)

[34. 在排序数组中查找元素的第一个和最后一个位置](https://leetcode.cn/problems/find-first-and-last-position-of-element-in-sorted-array/description/?envType=problem-list-v2&envId=binary-search) : [L34_searchRange](L34_searchRange)

[35. 搜索插入位置](https://leetcode.cn/problems/search-insert-position/?envType=problem-list-v2&envId=binary-search) : [L35_searchInsert](L35_searchInsert)

[69. x的平方根](https://leetcode.cn/problems/sqrtx/description/?envType=problem-list-v2&envId=binary-search) : [L69_mySqrt](L69_mySqrt)

[74. 搜索二维矩阵](https://leetcode.cn/problems/search-a-2d-matrix/description/?envType=problem-list-v2&envId=binary-search) : [L74_searchMatrix](L74_searchMatrix)

[81. 搜索旋转排序数组 II](https://leetcode.cn/problems/search-in-rotated-sorted-array-ii/description/?envType=problem-list-v2&envId=binary-search) : [L81_search](L81_search)

[153. 寻找旋转排序数组中的最小值](https://leetcode.cn/problems/find-minimum-in-rotated-sorted-array/description/?envType=problem-list-v2&envId=binary-search) : [L153_findMin](L153_findMin)

[154. 寻找旋转排序数组中的最小值 II](https://leetcode.cn/problems/find-minimum-in-rotated-sorted-array-ii/description/?envType=problem-list-v2&envId=binary-search) : [L154_findMin](L154_findMin)

[162. 寻找峰值](https://leetcode.cn/problems/find-peak-element/description/?envType=problem-list-v2&envId=binary-search) : [L162_findPeakElement](L162_findPeakElement)

[167. 两数之和 II - 输入有序数组](https://leetcode.cn/problems/two-sum-ii-input-array-is-sorted/description/?envType=problem-list-v2&envId=binary-search) : [L167_twoSum](L167_twoSum)

[209. 长度最小的子数组](https://leetcode.cn/problems/minimum-size-subarray-sum/description/?envType=problem-list-v2&envId=binary-search) : [L209_minSubArrayLen](L209_minSubArrayLen)

[222. 完全二叉树的节点个数](https://leetcode.cn/problems/count-complete-tree-nodes/description/?envType=problem-list-v2&envId=binary-search) : [L222_countNodes](L222_countNodes)

[240. 搜索二维矩阵 II](https://leetcode.cn/problems/search-a-2d-matrix-ii/description/?envType=problem-list-v2&envId=binary-search) : [L240_searchMatrix](L240_searchMatrix)

[268. 丢失的数字](https://leetcode.cn/problems/missing-number/description/?envType=problem-list-v2&envId=binary-search) : [L268_missingNumber](L268_missingNumber)

[275. H 指数 II](https://leetcode.cn/problems/h-index-ii/description/?envType=problem-list-v2&envId=binary-search) : [L275_hIndex](L275_hIndex)

[278. 第一个错误的版本](https://leetcode.cn/problems/first-bad-version/description/?envType=problem-list-v2&envId=binary-search) : [L278_firstBadVersion](L278_firstBadVersion)

[287. 寻找重复数](https://leetcode.cn/problems/find-the-duplicate-number/description/?envType=problem-list-v2&envId=binary-search) : [L287_findDuplicate](L287_findDuplicate)


你是产品经理，目前正在带领一个团队开发新的产品。不幸的是，你的产品的最新版本没有通过质量检测。由于每个版本都是基于之前的版本开发的，所以错误的版本之后的所有版本都是错的。

假设你有 n 个版本 [1, 2, ..., n]，你想找出导致之后所有版本出错的第一个错误的版本。

你可以通过调用 bool isBadVersion(version) 接口来判断版本号 version 是否在单元测试中出错。实现一个函数来查找第一个错误的版本。你应该尽量减少对调用 API 的次数。