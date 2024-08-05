/*
 * @lc app=leetcode.cn id=4 lang=cpp
 * @lcpr version=30204
 *
 * [4] 寻找两个正序数组的中位数
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
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=(nums1.size()+nums2.size())/2;
        int nn;
        auto it1_beg=nums1.begin(),it2_beg=nums2.begin();
        auto it1_end=nums1.end(),it2_end=nums2.end();
        auto it1_mid=it1_beg+(it1_end-it1_beg)/2;
        auto it2_mid=lower_bound(it2_beg,it2_end,*it1_mid);
        auto mid=it1_mid;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,3]\n[2]\n
// @lcpr case=end

// @lcpr case=start
// [1,2]\n[3,4]\n
// @lcpr case=end

 */

