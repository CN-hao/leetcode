/*
 * @lc app=leetcode.cn id=1399 lang=cpp
 * @lcpr version=30204
 *
 * [1399] 统计最大组的数目
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
    int countLargestGroup(int n) {
        unordered_map<int, int> groupCount;
        unordered_map<int, int> m;
        int maxCount = 0;
        for (int i = 1; i <= n; ++i) {
            int sum = 0;
            int num = i;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            ++groupCount[sum];
        }
        for (const auto& [key, value] : groupCount) {
            m[value]++;
            maxCount = max(maxCount, value);
        }
        return m[maxCount];
    }
};
// @lc code=end



/*
// @lcpr case=start
// 13\n
// @lcpr case=end

// @lcpr case=start
// 2\n
// @lcpr case=end

// @lcpr case=start
// 15\n
// @lcpr case=end

// @lcpr case=start
// 24\n
// @lcpr case=end

 */

