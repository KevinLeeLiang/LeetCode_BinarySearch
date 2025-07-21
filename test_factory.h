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
#include "L240_searchMatrix/L240_searchMatrix.h"
#include "L268_missingNumber/L268_missingNumber.h"
#include "L275_hIndex/L275_hIndex.h"
#include "L278_firstBadVersion/L278_firstBadVersion.h"
#include "L287_findDuplicate/L287_findDuplicate.h"
#include "L300_lengthOfLIS/L300_lengthOfLIS.h"
#include "L315_countSmaller/L315_countSmaller.h"
#include "L327_countRangeSum/L327_countRangeSum.h"
#include "L349_intersection/L349_intersection.h"
#include "L350_intersect/L350_intersect.h"
#include "L352_SummaryRanges/L352_SummaryRanges.h"
#include "L354_maxEnvelopes/L354_maxEnvelopes.h"
#include "L363_maxSumSubmatrix/L363_maxSumSubmatrix.h"
#include "L367_isPerfectSquare/L367_isPerfectSquare.h"
#include "L374_guessNumber/L374_guessNumber.h"
#include "L363_maxSumSubmatrix/L363_maxSumSubmatrix.h"
#include "L367_isPerfectSquare/L367_isPerfectSquare.h"
#include "L374_guessNumber/L374_guessNumber.h"
#include "L378_kthSmallest/L378_kthSmallest.h"
#include "L400_findNthDigit/L400_findNthDigit.h"
#include "L410_splitArray/L410_splitArray.h"
#include "L436_findRightInterval/L436_findRightInterval.h"
#include "L441_arrangeCoins/L441_arrangeCoins.h"
#include "L456_find132pattern/L456_find132pattern.h"
#include "L475_findRadius/L475_findRadius.h"
#include "L483_smallestGoodBase/L483_smallestGoodBase.h"
#include "L493_reversePairs/L493_reversePairs.h"
#include "L497_randomPointsInNonOverlappingRectangles/L497_randomPointsInNonOverlappingRectangles.h"
#include "L528_RandomlySelectByWeight/L528_RandomlySelectByWeight.h"
#include "L532_findPairs/L532_findPairs.h"
#include "L540_singleNonDuplicate/L540_singleNonDuplicate.h"
#include "L611_triangleNumber/L611_triangeNumber.h"
#include "L633_judgeSquareSum/L633_judgeSquareSum.h"
#include "L658_findClosestElements/L658_findClosestELements.h"
#include "L668_findKthNumber/L668_findKthNumber.h"
#include "L704_binarySearch/L704_binarySearch.h"
#include "L710_random/L710_random.h"
#include "L713_numSubarrayProductLessThanK/L713_numSubarrayProductLessThanK.h"

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
        } else if (title == "L240") {
            std::shared_ptr<L240_searchMatrix> tmp = std::make_shared<L240_searchMatrix>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L268") {
            std::shared_ptr<L268_missingNumber> tmp = std::make_shared<L268_missingNumber>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L275") {
            std::shared_ptr<L275_hIndex> tmp = std::make_shared<L275_hIndex>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L278") {
            std::shared_ptr<L278_firstBadVersion> tmp = std::make_shared<L278_firstBadVersion>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L287") {
            std::shared_ptr<L287_findDuplicate> tmp = std::make_shared<L287_findDuplicate>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L300") {
            std::shared_ptr<L300_lengthOfLIS> tmp = std::make_shared<L300_lengthOfLIS>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L327") {
            std::shared_ptr<L327_countRangeSum> tmp = std::make_shared<L327_countRangeSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L315") {
            std::shared_ptr<L315_countSmaller> tmp = std::make_shared<L315_countSmaller>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L349") {
            std::shared_ptr<L349_intersection> tmp = std::make_shared<L349_intersection>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L350") {
            std::shared_ptr<L350_intersect> tmp = std::make_shared<L350_intersect>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L352") {
            std::shared_ptr<L352_SummaryRanges> tmp = std::make_shared<L352_SummaryRanges>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L354") {
            std::shared_ptr<L354_maxEnvelopes> tmp = std::make_shared<L354_maxEnvelopes>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L363") {
            std::shared_ptr<L363_maxSumSubmatrix> tmp = std::make_shared<L363_maxSumSubmatrix>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L367") {
            std::shared_ptr<L367_isPerfectSquare> tmp = std::make_shared<L367_isPerfectSquare>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L374") {
            std::shared_ptr<L374_guessNumber> tmp = std::make_shared<L374_guessNumber>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L378") {
            std::shared_ptr<L378_kthSmallest> tmp = std::make_shared<L378_kthSmallest>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L400") {
            std::shared_ptr<L400_findNthDigit> tmp = std::make_shared<L400_findNthDigit>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L410") {
            std::shared_ptr<L410_splitArray> tmp = std::make_shared<L410_splitArray>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L436") {
            std::shared_ptr<L436_findRightInterval> tmp = std::make_shared<L436_findRightInterval>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L441") {
            std::shared_ptr<L441_arrangeCoins> tmp = std::make_shared<L441_arrangeCoins>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L456") {
            std::shared_ptr<L456_find132pattern> tmp = std::make_shared<L456_find132pattern>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L475") {
            std::shared_ptr<L475_findRadius> tmp = std::make_shared<L475_findRadius>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L483") {
            std::shared_ptr<L483_smallestGoodBase> tmp = std::make_shared<L483_smallestGoodBase>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L493") {
            std::shared_ptr<L493_reversePairs> tmp = std::make_shared<L493_reversePairs>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L497") {
            std::shared_ptr<L497_randomPointsInNonOverlappingRectangles> tmp = std::make_shared<L497_randomPointsInNonOverlappingRectangles>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L528") {
            std::shared_ptr<L528_RandomlySelectByWeight> tmp = std::make_shared<L528_RandomlySelectByWeight>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L532") {
            std::shared_ptr<L532_findPairs> tmp = std::make_shared<L532_findPairs>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L540") {
            std::shared_ptr<L540_singleNonDuplicate> tmp = std::make_shared<L540_singleNonDuplicate>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L611") {
            std::shared_ptr<L611_triangeNumber> tmp = std::make_shared<L611_triangeNumber>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L633") {
            std::shared_ptr<L633_judgeSquareSum> tmp = std::make_shared<L633_judgeSquareSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L658") {
            std::shared_ptr<L658_findClosestELements> tmp = std::make_shared<L658_findClosestELements>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L668") {
            std::shared_ptr<L668_findKthNumber> tmp = std::make_shared<L668_findKthNumber>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L704") {
            std::shared_ptr<L704_binarySearch> tmp = std::make_shared<L704_binarySearch>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L710") {
            std::shared_ptr<L710_random> tmp = std::make_shared<L710_random>();
            solution_ = std::dynamic_pointer_cast<LeetcodeBinarySearch>(tmp);
        } else if (title == "L713") {
            std::shared_ptr<L713_numSubarrayProductLessThanK> tmp = std::make_shared<L713_numSubarrayProductLessThanK>();
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
