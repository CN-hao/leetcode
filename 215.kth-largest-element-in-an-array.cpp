/*
 * @lc app=leetcode.cn id=215 lang=cpp
 * @lcpr version=30204
 *
 * [215] 数组中的第K个最大元素
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
    int findKthLargest(vector<int>& nums, int k) {
        if(nums.size()==1) return nums[0];
        int beg=0,end=nums.size()-1;
        while(beg<=end){
            int mid=beg;
            int i=beg-1;
            int j=end+1;
            while(i<j){
                do ++i; while(nums[i]>nums[mid]);
                do --j; while(nums[j]<nums[mid]);
                if(i<j) swap(nums[i],nums[j]);
            }
            if(j+1==k) return nums[mid];
            swap(nums[mid],nums[j]);
            if(k>j+1) beg=j+1;
            else end=j-1;
        }
        return -9999;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 2\n
// @lcpr case=end

// @lcpr case=start
// 4\n
// @lcpr case=end

 */

