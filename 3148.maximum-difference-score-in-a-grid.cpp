/*
 * @lc app=leetcode.cn id=3148 lang=cpp
 * @lcpr version=30204
 *
 * [3148] 矩阵中的最大得分
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

//尝试最快 不使用额外空间 嚆.
//正常版本
int init_=[]{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    return 0;
}();
class Solution {
public:
    int maxScore(vector<vector<int>>& grid) {
        int max=INT_MIN;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int temp_max=INT_MIN;
                if(i+1<m) temp_max=std::max(temp_max,grid[i+1][j]);
                if(j+1<n) temp_max=std::max(temp_max,grid[i][j+1]);
                if(temp_max!=INT_MIN){
                    max=std::max(max,temp_max-grid[i][j]);
                    grid[i][j]=std::max(grid[i][j],temp_max);
                }
            }
        }
        return max;
    }
};

//尝试优化速度版本少一个if
// int init_=[]{
//     ios::sync_with_stdio(false);
//     cin.tie(0);cout.tie(0);
//     return 0;
// }();
// class Solution {
// public:
//     int maxScore(vector<vector<int>>& grid) {
//         int max=INT_MIN;
//         int m=grid.size();
//         int n=grid[0].size();

//         int temp_max=INT_MIN;

//         for(int i=m-2;i>=0;i--){
//             temp_max=std::max(temp_max,grid[i+1][n-1]);
//             max=std::max(max,temp_max-grid[i][n-1]);
//             grid[i][n-1]=std::max(grid[i][n-1],temp_max);
//         }
//         temp_max=INT_MIN;
//         for(int i=n-2;i>=0;i--){
//             temp_max=std::max(temp_max,grid[m-1][i+1]);
//             max=std::max(max,temp_max-grid[m-1][i]);
//             grid[m-1][i]=std::max(grid[m-1][i],temp_max);
//         }
//         for(int i=m-2;i>=0;i--){
//             for(int j=n-2;j>=0;j--){
//                 temp_max=std::max(grid[i+1][j],grid[i][j+1]);
//                 max=std::max(max,temp_max-grid[i][j]);
//                 grid[i][j]=std::max(grid[i][j],temp_max);
//                 }
//             }
//         return max;
//     }
// };
// @lc code=end



/*
// @lcpr case=start
// [[9,5,7,3],[8,9,6,1],[6,7,14,3],[2,5,3,1]]\n
// @lcpr case=end

// @lcpr case=start
// [[4,3,2],[3,2,1]]\n
// @lcpr case=end

 */

