/*
 * @lc app=leetcode.cn id=3131 lang=cpp
 * @lcpr version=30204
 *
 * [3131] 找出与数组相加的整数 I
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
//水
class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        return *max_element(nums2.begin(), nums2.end()) 
        -* max_element(nums1.begin(), nums1.end());
    }
};
// @lc code=end



/*
// @lcpr case=start
// [2,6,4]\n[9,7,5]\n
// @lcpr case=end

// @lcpr case=start
// [10]\n[5]\n
// @lcpr case=end

// @lcpr case=start
// [1,1,1,1]\n[1,1,1,1]\n
// @lcpr case=end

 */

