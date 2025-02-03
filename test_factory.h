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

class test_factory {
private:
    void buildSolution(string title) {
        if (title == "L4") {
            std::shared_ptr<L4_findMedianSortedArrays> tmp= std::make_shared<L4_findMedianSortedArrays>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L33") {
            std::shared_ptr<L33_search> tmp= std::make_shared<L33_search>();
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
