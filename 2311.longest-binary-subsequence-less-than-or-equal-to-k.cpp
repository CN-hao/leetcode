/*
 * @lc app=leetcode.cn id=2311 lang=cpp
 * @lcpr version=30204
 *
 * [2311] 小于等于 K 的最长二进制子序列
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
    int longestSubsequence(string s, int k) {
        int n = s.size();
        int cnt = 0;
        unsigned long long  sum = 0;
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == '0') {
                ++cnt;
            }else{
                if(cnt>31) continue;//必定大于 k 不需要算了
                unsigned long long  t= (1ULL << cnt)+ sum;
                if (t <= k) {
                    ++cnt;
                    sum = t;
                }
            }
        }
        return cnt;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "1001010"\n5\n
// @lcpr case=end

// @lcpr case=start
// "00101001"\n1\n
// @lcpr case=end

 */

