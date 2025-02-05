cmake_minimum_required(VERSION 3.17)
project(BinarySearch)

set(CMAKE_CXX_STANDARD 17)
include_directories(util)
add_executable(BinarySearch main.cpp L4_findMedianSortedArrays/L4_findMedianSortedArrays.cpp L4_findMedianSortedArrays/L4_findMedianSortedArrays.h test_factory.h util/util.h L33_search/L33_search.cpp L33_search/L33_search.h L34_searchRange/L34_searchRange.cpp L34_searchRange/L34_searchRange.h L35_searchInsert/L35_searchInsert.cpp L35_searchInsert/L35_searchInsert.h)