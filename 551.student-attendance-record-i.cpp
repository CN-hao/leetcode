/*
 * @lc app=leetcode.cn id=551 lang=cpp
 * @lcpr version=30204
 *
 * [551] 学生出勤记录 I
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

//lll不能评 lla却可以 xswl
class Solution {
public:
    bool checkRecord(string s) {
        int a = 0;
        int p = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A') {
                if (++a ==2) {
                    return false;
                }
            }
            if (s[i] == 'L') {
                if (++p == 3) {
                    return false;
                }
            } else {
                p = 0;
            }
        }
        return true;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "PPALLP"\n
// @lcpr case=end

// @lcpr case=start
// "PPALLL"\n
// @lcpr case=end

 */

