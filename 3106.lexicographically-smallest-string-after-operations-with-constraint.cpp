/*
 * @lc app=leetcode.cn id=3106 lang=cpp
 * @lcpr version=30204
 *
 * [3106] 满足距离约束且字典序最小的字符串
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
//每日一题简单的贪心  简单的不喜欢做 难的做不明白
class Solution {
public:
    string getSmallestString(string s, int k) {
        int i;
        for(i=0;i<s.size();i++){ 
            int d= abs(s[i] - 'a');
            d=min(d,26-d);
            if(k-d<0) break;
            k-=d;
            s[i]='a';  
        }
        if(i!=s.size()) 
            s[i]-=k;
        
        return s;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "zbbz"\n3\n
// @lcpr case=end

// @lcpr case=start
// "xaxcd"\n4\n
// @lcpr case=end

// @lcpr case=start
// "lol"\n0\n
// @lcpr case=end

 */

