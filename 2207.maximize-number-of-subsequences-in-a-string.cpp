/*
 * @lc app=leetcode.cn id=2207 lang=cpp
 * @lcpr version=30204
 *
 * [2207] 字符串中最多数目的子序列
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
    long long maximumSubsequenceCount(string text, string pattern) {
        long long a=0;
        long long b=0;
        long long sum=0;
        for(int i=0;i<text.size();i++){
            if(text[i]==pattern[1]){
                sum+=a;
                b++;
            }
            if(text[i]==pattern[0]){
                a++;
            }
        }
        sum+=a>b?a:b;
        return sum;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "abdcdbc"\n"ac"\n
// @lcpr case=end

// @lcpr case=start
// "aabb"\n"ab"\n
// @lcpr case=end

 */

