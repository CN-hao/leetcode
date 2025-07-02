/*
 * @lc app=leetcode.cn id=1042 lang=cpp
 * @lcpr version=30204
 *
 * [1042] 不邻接植花
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
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        vector<int> ans(n,0);
        vector<vector<bool>> m(n+1,vector<bool>(n+1,false));
        for(auto& path:paths){
            m[path[0]][path[1]]=true;
            m[path[1]][path[0]]=true;
        }
        for(int i=1;i<=n;++i){
            int j;
            for(j=ans[i-1]+1,ans[i-1]=0;j<=4;++j){
                int k;
                for(k=1;k<=n;++k){
                    if(m[i][k]&&ans[k-1]==j) break; 
                }
                if(k>n) break;
            }
            if(j<=n) {
                ans[i-1]=j;
            }else{
                i-=2;
            }
        }
        return ans;

    }
};
// @lc code=end



/*
// @lcpr case=start
// 3\n[[1,2],[2,3],[3,1]]\n
// @lcpr case=end

// @lcpr case=start
// 4\n[[1,2],[3,4]]\n
// @lcpr case=end

// @lcpr case=start
// 4\n[[1,2],[2,3],[3,4],[4,1],[1,3],[2,4]]\n
// @lcpr case=end

 */

