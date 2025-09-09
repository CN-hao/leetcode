/*
 * @lc app=leetcode.cn id=2327 lang=cpp
 * @lcpr version=30204
 *
 * [2327] 知道秘密的人数
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
    int  N=(int)1e9+7;
    int  dp[2001][2]={{0}};
    int funP(int a,int b){
        return (a+b)%N;
    }
    int funS(int a,int b){
        return (a-b+N)%N;
    }
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        int ans=1;
        int p=0;
        int d=delay;
        int f=forget;
        dp[d][0]=dp[f][1]=1;
        for(int i=1;i<=n;++i,++d,++f){
            dp[d][0]=funP(dp[d][0],p);
            dp[f][1]=funP(dp[f][1],p);
            ans=funP(ans,p);
            ans=funS(ans,dp[i-1][1]);
            p=funP(p,dp[i][0]);
            p=funS(p,dp[i][1]);
        }
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 6\n2\n4\n
// @lcpr case=end

// @lcpr case=start
// 4\n1\n3\n
// @lcpr case=end

 */

