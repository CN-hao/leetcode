/*
 * @lc app=leetcode.cn id=2787 lang=cpp
 * @lcpr version=30204
 *
 * [2787] 将一个数字表示成幂的和的方案数
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
    int pow(int n,int x){
        int nn=n;
        while(--x)nn*=n;
        return nn;
    }
    int sum=0;
    int N=0;
    int ans=0;
    void fun(vector<int>&nums,int i){
        if(i==nums.size()) return;
        fun(nums,i+1);
        sum+=nums[i];
        if(sum==N){
            ans=(ans+1)%(int)(1e9+7);
        }else if(sum<N){
            fun(nums,i+1);
        }
        sum-=nums[i];
    }
public:
    int numberOfWays(int n, int x) {
        vector<int> nums;
        int t=0;
        N=n;
        for(int i=1;(t=pow(i,x))<=n;++i){
            nums.push_back(t);
        }
        fun(nums,0);
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 10\n2\n
// @lcpr case=end

// @lcpr case=start
// 4\n1\n
// @lcpr case=end

 */

