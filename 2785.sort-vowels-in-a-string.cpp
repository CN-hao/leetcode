/*
 * @lc app=leetcode.cn id=2785 lang=cpp
 * @lcpr version=30204
 *
 * [2785] 将字符串中的元音字母排序
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
    string sortVowels(string s) {
        unsigned short cnt[58] = {0};
        int n = s.size();
        int t = 0;
        auto check = [](char c){return (c == 'a' || c == 'e' || c == 'o' || c == 'i' || c == 'u' ||c == 'A' || c == 'E' || c == 'O' || c == 'I' || c == 'U');};
        for (size_t i = 0; i < n; ++i)
        {
            if (check(s[i]))
            {
                cnt[s[i] - 'A']++;
                s[i] = '.';
            }
        }
        for (size_t i = 0; i < n; ++i)
        {
            if (s[i] == '.')
            {
                while (cnt[t] == 0) ++t;
                s[i] = (char)(t + 'A');
                --cnt[t];
            }
        }
        return s;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "lEetcOde"\n
// @lcpr case=end

// @lcpr case=start
// "lYmpH"\n
// @lcpr case=end

 */

