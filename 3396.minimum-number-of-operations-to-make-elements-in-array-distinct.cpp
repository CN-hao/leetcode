/*
 * @lc app=leetcode.cn id=3396 lang=cpp
 * @lcpr version=30204
 *
 * [3396] 使数组元素互不相同所需的最少操作次数
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
    int minimumOperations(vector<int>& nums) {
        bitset<101> bs;
        unsigned char c=0;
        unsigned char res=0;
        int i;
        for(i=nums.size()-1;i<nums.size()&&!bs[nums[i]];--i){
            bs[nums[i]]=1;
        }
        return std::ceil((i+1)/3.0);
        }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,3,4,2,3,3,5,7]\n
// @lcpr case=end

// @lcpr case=start
// [4,5,6,4,4]\n
// @lcpr case=end

// @lcpr case=start
// [6,7,8,9]\n
// @lcpr case=end

 */

