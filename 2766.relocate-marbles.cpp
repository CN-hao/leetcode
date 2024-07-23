/*
 * @lc app=leetcode.cn id=2766 lang=cpp
 * @lcpr version=30204
 *
 * [2766] 重新放置石块
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
#include<bitset>
#include<set>
// @lcpr-template-end
// @lc code=start
class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        std::set<int> numSet;
        for (int i = 0; i < nums.size(); i++) {
            numSet.insert(nums[i]);
        }
        for (int i = 0; i < moveFrom.size(); i++) {
            numSet.erase(moveFrom[i]);
            numSet.insert(moveTo[i]);
        }
        vector<int> res(numSet.begin(), numSet.end());
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,6,7,8]\n[1,7,2]\n[2,9,5]\n
// @lcpr case=end

// @lcpr case=start
// [1,1,3,3]\n[1,3]\n[2,2]\n
// @lcpr case=end

 */

