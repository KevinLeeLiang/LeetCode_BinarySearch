cmake_minimum_required(VERSION 3.17)
project(BinarySearch)

set(CMAKE_CXX_STANDARD 17)
include_directories(util)
add_executable(BinarySearch main.cpp L4_findMedianSortedArrays/L4_findMedianSortedArrays.cpp L4_findMedianSortedArrays/L4_findMedianSortedArrays.h test_factory.h util/util.h L33_search/L33_search.cpp L33_search/L33_search.h L34_searchRange/L34_searchRange.cpp L34_searchRange/L34_searchRange.h L35_searchInsert/L35_searchInsert.cpp L35_searchInsert/L35_searchInsert.h L69_mySqrt/L69_mySqrt.cpp L69_mySqrt/L69_mySqrt.h L74_searchMatrix/L74_searchMatrix.cpp L74_searchMatrix/L74_searchMatrix.h L81_search/L81_search.cpp L81_search/L81_search.h L153_findMin/L153_findMin.cpp L153_findMin/L153_findMin.h)