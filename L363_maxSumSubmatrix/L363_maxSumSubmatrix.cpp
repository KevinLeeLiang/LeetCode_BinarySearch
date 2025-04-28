//
// Created by garen_lee on 2025/4/28.
/**
  ******************************************************************************
  * @file           : L363_maxSumSubmatrix.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/28
  ******************************************************************************
  */
//

#include "L363_maxSumSubmatrix.h"

int L363_maxSumSubmatrix::maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
    int ans = INT_MIN;
    int m = matrix.size(), n = matrix[0].size();
    for (int i = 0; i < m; ++i) {
        vector<int>sum(n);
        for (int j = i; j < m; ++j) {
            for (int c = 0; c < n; ++c){
                sum[c] += matrix[j][c];
            }
            set<int>sum_set{0};
            int s = 0;
            for (int v : sum) {
                s += v;
                auto lb = sum_set.lower_bound(s - k);
                if (lb != sum_set.end()) {
                    ans = max(ans, s - *lb);
                }
                sum_set.insert(s);
            }
        }
    }
    return ans;
}

void L363_maxSumSubmatrix::test() {
    vector<vector<int>> matrix = {{1, 0, 1}, {0, -2, 3}};
    cout << maxSumSubmatrix(matrix, 2) << endl;
    matrix = {{2, 2, -1}};
    cout << maxSumSubmatrix(matrix, 3) << endl;
}