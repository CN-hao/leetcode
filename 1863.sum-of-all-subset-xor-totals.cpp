/*
 * @lc app=leetcode.cn id=1863 lang=cpp
 * @lcpr version=30204
 *
 * [1863] 找出所有子集的异或总和再求和
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
int sum=0;
void dfs(int i,int x,vector<int>& nums){
    if(i==nums.size()){
        sum+=x;
        return;
    }
    dfs(i+1,x^nums[i],nums);
    dfs(i+1,x,nums);
}
public:
    int subsetXORSum(vector<int>& nums) {
        dfs(0,0,nums);
        return sum;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,3]\n
// @lcpr case=end

// @lcpr case=start
// [5,1,6]\n
// @lcpr case=end

// @lcpr case=start
// [3,4,5,6,7,8]\n
// @lcpr case=end

 */

