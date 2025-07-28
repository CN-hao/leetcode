/*
 * @lc app=leetcode.cn id=2044 lang=cpp
 * @lcpr version=30204
 *
 * [2044] 统计按位或能得到最大值的子集数目
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
private:
int cnt=0;
int max=INT_MIN;
void fun(vector<int>& nums, int sum,int i){
    if(i==nums.size()) return; 
    int s=sum|nums[i];
    if(s>max) {cnt=0;max=s;}
    if(s==max) ++cnt;
    fun(nums,s,i+1);
    fun(nums,sum,i+1);
}
public:
    int countMaxOrSubsets(vector<int>& nums) {
        fun(nums,0,0);
        return cnt;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [3,1]\n
// @lcpr case=end

// @lcpr case=start
// [2,2,2]\n
// @lcpr case=end

// @lcpr case=start
// [3,2,1,5]\n
// @lcpr case=end

 */

