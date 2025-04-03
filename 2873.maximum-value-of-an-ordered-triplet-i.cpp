/*
 * @lc app=leetcode.cn id=2873 lang=cpp
 * @lcpr version=30204
 *
 * [2873] 有序三元组中的最大值 I
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
    long long maximumTripletValue(vector<int>& nums) {
        vector<int> v1(nums.size(), 0);
        long  long  res=0;
        int max=nums[0];
        v1[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            v1[i]=std::max(v1[i+1], nums[i]);
        }
        for(int i=1;i<nums.size()-1;i++){
            res=std::max(res, ( long long )(max-nums[i])*v1[i+1]);
            max=std::max(max, nums[i]);
        }
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [12,6,1,2,7]\n
// @lcpr case=end

// @lcpr case=start
// [1,10,3,4,19]\n
// @lcpr case=end

// @lcpr case=start
// [1,2,3]\n
// @lcpr case=end

 */

