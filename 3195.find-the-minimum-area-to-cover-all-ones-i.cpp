/*
 * @lc app=leetcode.cn id=3195 lang=cpp
 * @lcpr version=30204
 *
 * [3195] 包含所有 1 的最小矩形面积 I
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
    int minimumArea(vector<vector<int>>& grid) {
        int maxi,maxj;
        int mini,minj;
        mini=minj=INT_MAX;
        maxi=maxj=INT_MIN;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(grid[i][j]){
                    mini=min(mini,i);
                    minj=min(minj,j);
                    maxi=max(maxi,i);
                    maxj=max(maxj,j);
                }
            }
        }
        return (maxi-mini+1)*(maxj-minj+1);
    }
};
// @lc code=end



/*
// @lcpr case=start
// [[0,1,0],[1,0,1]]\n
// @lcpr case=end

// @lcpr case=start
// [[0,0],[1,0]]\n
// @lcpr case=end

 */

