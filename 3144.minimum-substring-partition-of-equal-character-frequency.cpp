/*
 * @lc app=leetcode.cn id=3144 lang=cpp
 * @lcpr version=30204
 *
 * [3144] 分割字符频率相等的最少子字符串
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
    int minimumSubstringsInPartition(string s) {
        //vector<u_int16_t> dp_sum(s.size(), vector<u_int16_t>(26, 0));
        vector<u_int16_t> dp(s.size(), 0);
        dp[0]=1;
        for(int i=1;i<s.size();i++){
            u_int16_t count[26]={0};
            dp[i]=(u_int16_t)-1;
            for(int j=i;j>=0;j--){
                count[s[j]-'a']++;
                if(j>0&&dp[j-1]>=dp[i]){
                    continue;
                }
                u_int16_t temp=0;
                for(int k=0;k<26;k++){
                    if(count[k]!=0){
                        if(temp==0){
                            temp=count[k];
                        }else if(temp!=count[k]){
                            temp=0;
                            break;
                        }
                    }
                }
                if(temp!=0){
                    if(j==0) dp[i]=1;//1最小
                    else {
                        dp[i]=min((u_int16_t)(dp[j-1]+1),dp[i]);
                    }
                }
            }
        }
        return dp[s.size()-1];
    }
};
// @lc code=end



/*
// @lcpr case=start
// "fabccddg"\n
// @lcpr case=end

// @lcpr case=start
// "abababaccddb"\n
// @lcpr case=end

 */

