/*
 * @lc app=leetcode.cn id=3128 lang=cpp
 * @lcpr version=30204
 *
 * [3128] 直角三角形
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
//简单无聊
auto _{ []() noexcept {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); std::cout.tie(nullptr);
    return 0;
}() };
class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        short dp1[1000]={0};
        short dp2[1000]={0};
        unsigned long long  ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    dp1[j]++;
                    dp2[i]++;
                }
            }
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1&&dp1[j]>1&&dp2[i]>1){
                    ans+=(dp1[j]-1)*(dp2[i]-1);
                }
            }
        }
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [[0,1,0],[0,1,1],[0,1,0]]\n
// @lcpr case=end

// @lcpr case=start
// [[1,0,0,0],[0,1,0,1],[1,0,0,0]]\n
// @lcpr case=end

// @lcpr case=start
// [[1,0,1],[1,0,0],[1,0,0]]\n
// @lcpr case=end

 */

