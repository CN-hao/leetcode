/*
 * @lc app=leetcode.cn id=1928 lang=cpp
 * @lcpr version=30204
 *
 * [1928] 规定时间内到达终点的最小花费
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
// @lcpr-template-end
// @lc code=start
class Solution {
public:
    int minCost(int maxTime, vector<vector<int>>& edges, vector<int>& passingFees) {
        vector<vector<int>> grip(passingFees.size(), vector<int>(passingFees.size(), INT_MAX));
            for(auto &edge:edges){
                grip[edge[0]][edge[1]] = edge[2];
                grip[edge[1]][edge[0]] = edge[2];
            }            
        vector<vector<int>> val(passingFees.size(), vector<int>(passingFees.size(), INT_MAX));
        }
};
// @lc code=end



/*
// @lcpr case=start
// 30\n[[0,1,10],[1,2,10],[2,5,10],[0,3,1],[3,4,10],[4,5,15]]\n[5,1,2,20,20,3]\n
// @lcpr case=end

// @lcpr case=start
// 29\n[[0,1,10],[1,2,10],[2,5,10],[0,3,1],[3,4,10],[4,5,15]]\n[5,1,2,20,20,3]\n
// @lcpr case=end

// @lcpr case=start
// 25\n[[0,1,10],[1,2,10],[2,5,10],[0,3,1],[3,4,10],[4,5,15]]\n[5,1,2,20,20,3]\n
// @lcpr case=end

 */

