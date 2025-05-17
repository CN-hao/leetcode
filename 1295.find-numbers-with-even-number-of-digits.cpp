/*
 * @lc app=leetcode.cn id=1295 lang=cpp
 * @lcpr version=30204
 *
 * [1295] 统计位数为偶数的数字
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
    int findNumbers(vector<int>& nums) {
        int res=0;
        for(auto &&num:nums){
            int c=0;
            do{c++;}while(nums、=10);
            res+=(c%2==0);
        }
    }
};
// @lc code=end



/*
// @lcpr case=start
// [12,345,2,6,7896]\n
// @lcpr case=end

// @lcpr case=start
// [555,901,482,1771]\n
// @lcpr case=end

 */

