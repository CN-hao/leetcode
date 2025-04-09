/*
 * @lc app=leetcode.cn id=3375 lang=cpp
 * @lcpr version=30204
 *
 * [3375] 使数组的值全部为 K 的最少操作次数
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
    int minOperations(vector<int>& nums, int k) {
        bitset<101> bs;
        int res=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]<k) {
                return -1;
            }else if(nums[i]>k&&!bs[nums[i]]){
                    bs[nums[i]]=1;
                    ++res;
            }
        }
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [5,2,5,4,5]\n2\n
// @lcpr case=end

// @lcpr case=start
// [2,1,2]\n2\n
// @lcpr case=end

// @lcpr case=start
// [9,7,5,3]\n1\n
// @lcpr case=end

 */

