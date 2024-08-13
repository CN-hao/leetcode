/*
 * @lc app=leetcode.cn id=3152 lang=cpp
 * @lcpr version=30204
 *
 * [3152] 特殊数组 II
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
//今天学习一手前缀和
class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {

        vector<int> s(nums.size());
        for (int i = 1; i < nums.size(); i++) {
            s[i] = s[i - 1] + (nums[i - 1] % 2 == nums[i] % 2);
        }
        vector<bool> ans(queries.size());
        for (int i = 0; i < queries.size(); i++) {
            auto& q = queries[i];
            ans[i] = s[q[0]] == s[q[1]];
        }
        return ans;

        // vector<bitset<100000>> dp(nums.size(),bitset<100000>(0));
        // dp[0][0]=true;
        // for(int i=1;i<nums.size();i++){
        //     if((nums[i-1]&1)!=(nums[i]&1))  dp[i][i-1]=true;
        //     dp[i][i]=true;
        // }
        // for(int i=3;i<=nums.size();i++)
        //     for(int j=0;j+i-1<nums.size();j++){
        //         dp[j+i-1][j]=dp[j+i-2][j]&&dp[j+i-1][j+i-2];
        // }
        // vector<bool> res(queries.size());
        // for(int i=0;i<queries.size();i++){
        //     res[i]=dp[queries[i][1]][queries[i][0]];
        // }
        // return res;


        // vector<bool> res(queries.size());
        // for(int i=0;i<queries.size();i++){
        //     res[i]=true;
        //     for(int j=queries[i][0]+1;j<=queries[i][1];j++){
        //         if((nums[j-1]&1)==(nums[j]&1)){
        //             res[i]=false;
        //         }
        //     }
        // }
        // return res;
    }

};
// @lc code=end



/*
// @lcpr case=start
// [3,4,1,2,6]\n[[0,4]]\n
// @lcpr case=end

// @lcpr case=start
// [4,3,1,6]\n[[0,2],[2,3]]\n
// @lcpr case=end

 */

