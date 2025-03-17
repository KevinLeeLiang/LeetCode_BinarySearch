//
// Created by garen-lee on 2025/2/3.
/**
  ******************************************************************************
  * @file           : test_factory.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/3
  ******************************************************************************
  */
//

#ifndef BINARYSEARCH_TEST_FACTORY_H
#define BINARYSEARCH_TEST_FACTORY_H
#include <memory>
#include "L4_findMedianSortedArrays/L4_findMedianSortedArrays.h"
#include "L33_search/L33_search.h"
#include "L34_searchRange/L34_searchRange.h"
#include "L35_searchInsert/L35_searchInsert.h"
#include "L69_mySqrt/L69_mySqrt.h"
#include "L74_searchMatrix/L74_searchMatrix.h"
#include "L81_search/L81_search.h"
#include "L153_findMin/L153_findMin.h"
#include "L154_findMin/L154_findMin.h"
#include "L162_findPeakElement/L162_findPeakElement.h"
#include "L167_twoSum/L167_twoSum.h"
#include "L209_minSubArrayLen/L209_minSubArrayLen.h"
#include "L222_countNodes/L222_countNodes.h"

class test_factory {
private:
    void buildSolution(string title) {
        if (title == "L4") {
            std::shared_ptr<L4_findMedianSortedArrays> tmp= std::make_shared<L4_findMedianSortedArrays>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L33") {
            std::shared_ptr<L33_search> tmp= std::make_shared<L33_search>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L34") {
            std::shared_ptr<L34_searchRange> tmp= std::make_shared<L34_searchRange>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L35") {
            std::shared_ptr<L35_searchInsert> tmp= std::make_shared<L35_searchInsert>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L69") {
            std::shared_ptr<L69_mySqrt> tmp= std::make_shared<L69_mySqrt>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L74") {
            std::shared_ptr<L74_searchMatrix> tmp= std::make_shared<L74_searchMatrix>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L81") {
            std::shared_ptr<L81_search> tmp= std::make_shared<L81_search>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L153") {
            std::shared_ptr<L153_findMin> tmp= std::make_shared<L153_findMin>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L154") {
            std::shared_ptr<L154_findMin> tmp= std::make_shared<L154_findMin>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L162") {
            std::shared_ptr<L162_findPeakElement> tmp = std::make_shared<L162_findPeakElement>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L167") {
            std::shared_ptr<L167_twoSum> tmp = std::make_shared<L167_twoSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L209") {
            std::shared_ptr<L209_minSubArrayLen> tmp = std::make_shared<L209_minSubArrayLen>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L222") {
            std::shared_ptr<L222_countNodes> tmp = std::make_shared<L222_countNodes>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        }
    }
public:
    test_factory(string title) {
        cout << "test " << title << endl;
        buildSolution(title);
    }
    void test() {
        solution_->test();
    }
    ~test_factory() {}

private:
    std::shared_ptr<LeetcodeBinarySearch> solution_;
};
#endif //BINARYSEARCH_TEST_FACTORY_H
