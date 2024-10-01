/*
 * @lc app=leetcode.cn id=983 lang=cpp
 * @lcpr version=30204
 *
 * [983] 最低票价
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

//dp
class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(days.size(),10000);
        int ds[3]={1,7,30};
        for(int i=1;i>=0;i--) costs[i]=min(costs[i],costs[i+1]);
        for(int i=days.size()-1;i>=0;i--){
            for(int j=i,k=0;j<days.size();j++){
                if(days[j]-days[i]>=ds[k]){
                    dp[i]=min(dp[i],dp[j]+costs[k]);
                    if(++k==3) break;
                }
                if(j==days.size()-1&&days[j]-days[i]<ds[k])
                    dp[i]=min(dp[i],costs[k]);
            }
        }
        return dp[0];
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,4,6,7,8,20]\n[2,7,15]\n
// @lcpr case=end

// @lcpr case=start
// [1,2,3,4,5,6,7,8,9,10,30,31]\n[2,7,15]\n
// @lcpr case=end

 */

