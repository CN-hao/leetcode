/*
 * @lc app=leetcode.cn id=38 lang=cpp
 * @lcpr version=30204
 *
 * [38] 外观数列
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
    string countAndSay(int n) {
        string s = "1";
        for(int i=2;i<=n;++i){
            string t;
            int cnt = 1;
            for(int i=0;i<s.size();++i){
                if(i!=s.size()&& s[i]==s[i+1]){
                    ++cnt;
                }else{
                    t += to_string(cnt) + s[i];
                    cnt = 1;
                }
            }
            s = t;
        }
        return s;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 4\n
// @lcpr case=end

// @lcpr case=start
// 1\n
// @lcpr case=end

 */

