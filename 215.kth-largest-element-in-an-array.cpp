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
        int beg=0,end=nums.size()-1;
        int i,j,p;
        while(beg<=end){
            p=nums[end];
            for(j=i=beg;j<end;++j)if(nums[j]>p) swap(nums[i++],nums[j]);
            if(i+1==k) return p;
            swap(nums[i],nums[end]);
            i+1<k?beg=i+1:end=i-1;
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

