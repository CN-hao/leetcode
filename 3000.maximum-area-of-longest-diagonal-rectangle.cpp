/*
 * @lc app=leetcode.cn id=3000 lang=cpp
 * @lcpr version=30204
 *
 * [3000] 对角线最长的矩形的面积
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
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxArea=dimensions[0][0]*dimensions[0][1];
        int maxC=dimensions[0][0]*dimensions[0][0]+dimensions[0][1]*dimensions[0][1];
        for(int i=1;i<dimensions.size();++i){
            int area=dimensions[i][0]*dimensions[i][1];
            int c=dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1];
            if(c>maxC||c==maxC&&area>maxArea){
                maxC=c;
                maxArea=area;
            }
        }
        return maxArea;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [[9,3],[8,6]]\n
// @lcpr case=end

// @lcpr case=start
// [[3,4],[4,3]]\n
// @lcpr case=end

 */

