/*
 * @lc app=leetcode.cn id=3137 lang=cpp
 * @lcpr version=30204
 *
 * [3137] K 周期字符串需要的最少操作次数
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
    int minimumOperationsToMakeKPeriodic(string word, int k) {
        unordered_map<string,int> map;
        int max=INT_MIN;
        for(int i = 0; i < word.size(); i+=k) {
            string s = word.substr(i, k);
            map[s]++;
            max = std::max(max, map[s]);
        }
        return word.size()/k -max;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "leetcodeleet"\n4\n
// @lcpr case=end

// @lcpr case=start
// "leetcoleet"\n2\n
// @lcpr case=end

 */

