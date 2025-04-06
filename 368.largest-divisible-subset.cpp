/*
 * @lc app=leetcode.cn id=368 lang=cpp
 * @lcpr version=30204
 *
 * [368] 最大整除子集
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
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        ranges::sort(nums);
        int n=nums.size();
        vector<int> dp(n,1),next(n,-1);
        int maxHead=n-1;
        for(int i=n-1;i>=0;--i){
            for(int j=i+1;j<n;++j){
                if(nums[j]%nums[i]==0&&dp[j]+1>dp[i]){
                        dp[i]=dp[j]+1;
                        next[i]=j;
                }
            }
            maxHead=dp[i]>dp[maxHead]?i:maxHead;
        }
        n=dp[maxHead];
        vector<int> ans(n);
        for(int i=0;i<n;++i,maxHead=next[maxHead]){
            ans[i]=nums[maxHead];
        }
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,3]\n
// @lcpr case=end

// @lcpr case=start
// [1,2,4,8]\n
// @lcpr case=end

 */

