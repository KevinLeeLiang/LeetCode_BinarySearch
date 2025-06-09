//
// Created by garen_lee on 2025/6/9.
/**
  ******************************************************************************
  * @file           : L497_randomPointsInNonOverlappingRectangles.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/9
  ******************************************************************************
  */
//

#include "L497_randomPointsInNonOverlappingRectangles.h"
namespace L497 {
class Solution {
public:
    Solution(vector<vector<int>>& rects): rects{rects}{
        this->arr.emplace_back(0);
        for (auto & rect : rects) {
            this->arr.emplace_back(arr.back() + (rect[2] - rect[0] + 1) * (rect[3] - rect[1] + 1));
        }
    }
    vector<int> pick() {
        uniform_int_distribution<int> dis(0, arr.back() - 1);
        int k = dis(gen) % arr.back();
        int rectIndex = upper_bound(arr.begin(), arr.end(), k) - arr.begin() - 1;
        k = k - arr[rectIndex];
        int a = rects[rectIndex][0], b = rects[rectIndex][1];
        int y = rects[rectIndex][3];
        int col = y - b + 1;
        int da = k / col;
        int db = k - col * da;
        return {a + da, b + db};
    }

private:
    vector<int> arr;
    vector<vector<int>>& rects;
    mt19937 gen{random_device{}()};
};
}
using namespace L497;
void L497_randomPointsInNonOverlappingRectangles::test() {
    vector<vector<int>> rects = {{-2, -2, 1, 1}, {2, 2, 4, 6}};
    Solution sol(rects);
    vector<int> ans = sol.pick();
    print_vector(ans);
    ans = sol.pick();
    print_vector(ans);
    ans = sol.pick();
    print_vector(ans);
    ans = sol.pick();
    print_vector(ans);
    ans = sol.pick();
    print_vector(ans);
    ans = sol.pick();
    print_vector(ans);
    rects = {{-2, -2, -1, -1}, {2, 2, 4, 6}};
    Solution sol2(rects);
    print_vector(ans);
    ans = sol2.pick();
    print_vector(ans);
    ans = sol2.pick();
    print_vector(ans);
    ans = sol2.pick();
    print_vector(ans);
    ans = sol2.pick();
    print_vector(ans);
    ans = sol2.pick();
    print_vector(ans);
}