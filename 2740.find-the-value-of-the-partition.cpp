/*
 * @lc app=leetcode.cn id=2740 lang=cpp
 * @lcpr version=30204
 *
 * [2740] 找出分区值
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
    int findValueOfPartition(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        int ret=INT_MAX;
        for(size_t i=0;i<nums.size()-1;++i){
            int t=abs(nums[i]-nums[i+1]);
            ret=min(t,ret);
        }
        return ret;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,3,2,4]\n
// @lcpr case=end

// @lcpr case=start
// [100,1,10]\n
// @lcpr case=end

 */

