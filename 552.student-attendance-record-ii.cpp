/*
 * @lc app=leetcode.cn id=552 lang=cpp
 * @lcpr version=30204
 *
 * [552] 学生出勤记录 II
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

//题不水 我水
class Solution {
public:
    int checkRecord(int n) {
        vector<vector<int>> dp=vector<vector<int>>(2,vector<int>(6,0));
        dp[0][0]=1;
        dp[0][1]=1;
        dp[0][2]=0;
        dp[0][3]=1;
        dp[0][4]=0;
        dp[0][5]=0;
        for(int i=2;i<=n;i++){
            int c=(i-1)%2;
            int p=i%2;
            //p
            dp[c][0]=((dp[p][0]+dp[p][1])%1000000007+dp[p][2])%1000000007;
            dp[c][3]=((dp[p][3]+dp[p][4])%1000000007+dp[p][5])%1000000007;
            //l1
            dp[c][1]=dp[p][0];
            dp[c][4]=dp[p][3];
            //l2
            dp[c][2]=dp[p][1];
            dp[c][5]=dp[p][4];
            //a
            for(int j=0;j<3;j++){
                dp[c][3]=(dp[c][3]+dp[p][j])%1000000007;
            }
        }
        int sum=0;
        for(int i=0;i<6;i++){
            sum=(sum+dp[(n-1)%2][i])%1000000007;
        }
        return sum;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 2\n
// @lcpr case=end

// @lcpr case=start
// 1\n
// @lcpr case=end

// @lcpr case=start
// 10101\n
// @lcpr case=end

 */

