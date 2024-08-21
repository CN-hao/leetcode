/*
 * @lc app=leetcode.cn id=3146 lang=cpp
 * @lcpr version=30204
 *
 * [3146] 两个字符串的排列差
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
//水
class Solution {
public:
    int findPermutationDifference(string s, string t) {
        u_int8_t cnt[26]={0};
        for(int i=0;i<s.size();i++){
            cnt[s[i]-'a']=i;
        }
        u_int16_t ans=0;
        for(int i=0;i<t.size();i++){
            ans+=abs(i-cnt[t[i]-'a']);
        }
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "abc"\n"bac"\n
// @lcpr case=end

// @lcpr case=start
// "abcde"\n"edbac"\n
// @lcpr case=end

 */

