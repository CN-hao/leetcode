/*
 * @lc app=leetcode.cn id=1011 lang=cpp
 * @lcpr version=30204
 *
 * [1011] 在 D 天内送达包裹的能力
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
    int shipWithinDays(vector<int>& weights, int days) {
        for(int i = 1; i < weights.size(); ++i) {
            weights[i] += weights[i - 1];
        }
        
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,3,4,5,6,7,8,9,10]\n5\n
// @lcpr case=end

// @lcpr case=start
// [3,2,2,4,1,4]\n3\n
// @lcpr case=end

// @lcpr case=start
// [1,2,3,1,1]\n4\n
// @lcpr case=end

 */

