/*
 * @lc app=leetcode.cn id=699 lang=cpp
 * @lcpr version=30204
 *
 * [699] 掉落的方块
 */


// @lcpr-template-start
using namespace std;
#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#include <map>
//浅浅一道困难咯~~
class Solution {
public:

    vector<int> fallingSquares(vector<vector<int>>& positions) {
        auto n = positions.size();
        vector<int> result(n);
        map<int,array<int,2>> dp;
        int maxHeight = 0;
        int maxOverallHeight = 0;
        for(int i=0; i<n; i++){
            maxHeight = 0;
            int newLeft = positions[i][0];
            int newRight = newLeft + positions[i][1];
            auto it = dp.lower_bound(newLeft);
            if(it != dp.begin()){
                --it;
                if(it->first < newLeft && it->second[0] > newLeft){
                    if(it->second[0] > newRight){
                        dp[newRight] = array<int,2>{it->second[0], it->second[1]};
                    }
                    it->second[0] = newLeft;
                    maxHeight = std::max(maxHeight, it->second[1]);
                }
                ++it;
            }
            while(it != dp.end() && it->second[0] <= newRight){
                maxHeight = std::max(maxHeight, it->second[1]);
                it = dp.erase(it);
            }
            if(it != dp.end() && it->first < newRight){
                maxHeight = std::max(maxHeight, it->second[1]);
                auto tempOldRight = it->second[0];
                auto tempOldHeight = it->second[1];
                dp.erase(it);
                dp[newRight] = array<int,2>{tempOldRight, tempOldHeight};
            }
            dp[newLeft] = array<int,2>{newRight, maxHeight + positions[i][1]};
            maxOverallHeight = std::max(maxOverallHeight, maxHeight + positions[i][1]);
            result[i] = maxOverallHeight;
        }
        return result;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [[1,2],[2,3],[6,1]]\n
// @lcpr case=end

// @lcpr case=start
// [[100,100],[200,100]]\n
// @lcpr case=end

 */

