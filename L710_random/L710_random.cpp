//
// Created by garen_lee on 2025/7/14.
/**
  ******************************************************************************
  * @file           : L710_random.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/14
  ******************************************************************************
  */
//

#include "L710_random.h"
class Solution {
private:
    unordered_map<int, int> b2w;
    int bound;
public:
    Solution(int n, vector<int>& blacklist) {
        int m = blacklist.size();
        bound = n - m;
        unordered_set<int> black;
        for (int b: blacklist) {
            if (b >= bound) {
                black.emplace(b);
            }
        }

        int w = bound;
        for (int b: blacklist) {
            if (b < bound) {
                while (black.count(w)) {
                    ++w;
                }
                b2w[b] = w++;
            }
        }
    }

    int pick() {
        int x = rand() % bound;
        return b2w.count(x) ? b2w[x] : x;
    }
};

void L710_random::test() {
    int n = 7;
    vector<int> blacklist = {2, 3, 5};
    Solution obj(n, blacklist);
    cout << obj.pick() << endl;
    cout << obj.pick() << endl;
    cout << obj.pick() << endl;
    cout << obj.pick() << endl;
    cout << obj.pick() << endl;
    cout << obj.pick() << endl;
    cout << obj.pick() << endl;

}