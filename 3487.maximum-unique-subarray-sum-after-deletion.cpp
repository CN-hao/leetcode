/*
 * @lc app=leetcode.cn id=3487 lang=cpp
 * @lcpr version=30204
 *
 * [3487] 删除后的最大子数组元素和
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
    int maxSum(vector<int>& nums) {
        int ans=0;
        int max=INT_MIN;
        bitset<101> bs;
        for(int num:nums){
            max=std::max(max,num);
            if(num>0&&!bs[num]){
                bs.set(num);
                ans+=num;
            }
        }
        if(ans==0&&max<0) ans=max;
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,3,4,5]\n
// @lcpr case=end

// @lcpr case=start
// [1,1,0,1,1]\n
// @lcpr case=end

// @lcpr case=start
// [1,2,-1,-2,1,0,-1]\n
// @lcpr case=end

 */

