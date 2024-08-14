/*
 * @lc app=leetcode.cn id=3151 lang=cpp
 * @lcpr version=30204
 *
 * [3151] 特殊数组 I
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
    bool isArraySpecial(vector<int>& nums) {
        unsigned t=nums[0]&1;
        for(int i=1;i<nums.size();i++)
            if((t^(i&1))!=(nums[i]&1))   return false;
        return true;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1]\n
// @lcpr case=end

// @lcpr case=start
// [2,1,4]\n
// @lcpr case=end

// @lcpr case=start
// [4,3,1,6]\n
// @lcpr case=end

 */

