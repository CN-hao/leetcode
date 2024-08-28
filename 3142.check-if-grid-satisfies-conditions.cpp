/*
 * @lc app=leetcode.cn id=3142 lang=cpp
 * @lcpr version=30204
 *
 * [3142] 判断矩阵是否满足条件
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

//水
class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if((i!=grid.size()-1&&grid[i][j]!=grid[i+1][j])||
                    (j!=grid[0].size()-1&&grid[i][j]==grid[i][j+1])){
                    return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [[1,0,2],[1,0,2]]\n
// @lcpr case=end

// @lcpr case=start
// [[1,1,1],[0,0,0]]\n
// @lcpr case=end

// @lcpr case=start
// [[1],[2],[3]]\n
// @lcpr case=end

 */

