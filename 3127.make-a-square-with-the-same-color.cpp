/*
 * @lc app=leetcode.cn id=3127 lang=cpp
 * @lcpr version=30204
 *
 * [3127] 构造相同颜色的正方形
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
    bool canMakeSquare(vector<vector<char>>& grid) {
        for(int i=1;i<grid.size();i++){
            for(int j=1;j<grid[0].size();j++){
                int cnt=0;  
                if(grid[i][j]=='W') cnt++;
                if(grid[i-1][j]=='W') cnt++;
                if(grid[i][j-1]=='W') cnt++;
                if(grid[i-1][j-1]=='W') cnt++;
                if(cnt<=1||cnt>=3) return true;
            }
        }
        return false;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [["B","W","B"],["B","W","W"],["B","W","B"]]\n
// @lcpr case=end

// @lcpr case=start
// [["B","W","B"],["W","B","W"],["B","W","B"]]\n
// @lcpr case=end

// @lcpr case=start
// [["B","W","B"],["B","W","W"],["B","W","W"]]\n
// @lcpr case=end

 */

