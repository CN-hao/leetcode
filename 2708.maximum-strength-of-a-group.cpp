/*
 * @lc app=leetcode.cn id=2708 lang=cpp
 * @lcpr version=30204
 *
 * [2708] 一个小组的最大实力值
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

//这狗屁逻辑 想少写几行都费劲
class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        long long sum=LONG_LONG_MAX;
        int _max=INT_MIN;
        int c=0;
        for(auto num:nums){
            if(num!=0){
                if(sum==LONG_LONG_MAX) sum=num;
                else
                    sum*=num;
                if(num<0){
                    _max=max(_max,num);
                }             
            }
            else c++;
        }
        if(nums.size()-1<=c&&(sum<0||sum==LONG_LONG_MAX)) return 0;
        if(_max!=INT_MIN&&sum<0){
                sum/=_max;
        }
        return sum;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [3,-1,-5,2,5,-9]\n
// @lcpr case=end

// @lcpr case=start
// [-4,-5,-4]\n
// @lcpr case=end

 */

