/*
 * @lc app=leetcode.cn id=624 lang=cpp
 * @lcpr version=30204
 *
 * [624] 数组列表中的最大距离
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
    int maxDistance(vector<vector<int>>& arrays) {
        int n = arrays.size();
        if (n == 1) return 0;
        int minVal = arrays[0][0], maxVal = arrays[0].back();
        int res = 0;
        for (int i = 1; i < n; ++i) {
            res = max(res, abs(arrays[i].back() - minVal));
            res = max(res, abs(arrays[i][0] - maxVal));
            minVal = min(minVal, arrays[i][0]);
            maxVal = max(maxVal, arrays[i].back());
        }
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [[1,2,3],[4,5],[1,2,3]]\n
// @lcpr case=end

// @lcpr case=start
// [[1],[1]]\n
// @lcpr case=end

 */

