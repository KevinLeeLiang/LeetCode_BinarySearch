//
// Created by garen-lee on 2025/6/2.
/**
  ******************************************************************************
  * @file           : L475_findRadius.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/2
  ******************************************************************************
  */
//

#include "L475_findRadius.h"

int L475_findRadius::findRadius(vector<int>& houses, vector<int>& heaters) {
    int ans = 0;
    sort(heaters.begin(), heaters.end());
    for (int house : houses) {
        auto low = lower_bound(heaters.begin(), heaters.end(), house);
        int j = low - heaters.begin();
        int i = j - 1;
        int right = j < heaters.size() ? heaters[j] - house : INT_MAX;
        int left = i >= 0 ? house - heaters[i] : INT_MAX;
        ans = max(ans, min(left, right));
    }
    return ans;
}

void L475_findRadius::test() {
    vector<int> houses = {1, 2, 3};
    vector<int> heaters = {2};
    cout << findRadius(houses, heaters) << endl;
    houses = { 1, 2, 3, 4};
    heaters = {1, 4};
    cout << findRadius(houses, heaters) << endl;
    houses = {1, 5};
    heaters = {2};
    cout << findRadius(houses, heaters) << endl;
}