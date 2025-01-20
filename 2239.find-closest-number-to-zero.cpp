/*
 * @lc app=leetcode.cn id=2239 lang=cpp
 * @lcpr version=30204
 *
 * [2239] 找到最接近 0 的数字
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
    int findClosestNumber(vector<int>& nums) {
        int res=INT_MAX;
        for(int itme:nums) {
            if(abs(itme) < abs(res)) {
                res = itme;
            }else if(abs(itme) == abs(res)) {
                res = std::max(res, itme);
            }
        }
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [-4,-2,1,4,8]\n
// @lcpr case=end

// @lcpr case=start
// [2,-1,1]\n
// @lcpr case=end

 */

