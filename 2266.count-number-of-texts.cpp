/*
 * @lc app=leetcode.cn id=2266 lang=cpp
 * @lcpr version=30204
 *
 * [2266] 统计打字方案数
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
    int countTexts(string pressedKeys) {
        std::vector<std::vector<int> > dp(2, 
            std::vector<int>(pressedKeys.size()+1, 0));
        int count = 1;
        unsigned long long  res = 1;
        dp[0][0] =dp[1][0]= 1;
        for(int i=1; i<=pressedKeys.size(); i++) {
            for(int j=1; j<=3&&i-j>=0; j++) {
                    dp[0][i] = (dp[0][i] + dp[0][i-j]) % 1000000007;
            }
            for(int j=1; j<=4&&i-j>=0; j++) {
                    dp[1][i] = (dp[1][i] + dp[1][i-j]) % 1000000007;
            }
        }
        for(int i=1; i<=pressedKeys.size(); i++) {
            if(i==pressedKeys.size()||pressedKeys[i] != pressedKeys[i-1]) {
                int idx=(pressedKeys[i-1] == '7'||pressedKeys[i-1] == '9');
                res=(res*dp[idx][count])%1000000007;
                count = 1;
            }else{
                count++;
            }
        }
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "444479999555588866"\n
// @lcpr case=end

// @lcpr case=start
// "222222222222222222222222222222222222"\n
// @lcpr case=end

 */

