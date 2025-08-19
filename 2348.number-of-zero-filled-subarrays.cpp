/*
 * @lc app=leetcode.cn id=2348 lang=cpp
 * @lcpr version=30204
 *
 * [2348] 全 0 子数组的数目
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
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0,sum=0;
        for(int n:nums)sum+=n?count=0:++count;
        return sum;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,3,0,0,2,0,0,4]\n
// @lcpr case=end

// @lcpr case=start
// [0,0,0,2,0,0]\n
// @lcpr case=end

// @lcpr case=start
// [2,10,2019]\n
// @lcpr case=end

 */

