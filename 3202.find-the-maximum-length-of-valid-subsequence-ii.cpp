/*
 * @lc app=leetcode.cn id=3202 lang=cpp
 * @lcpr version=30204
 *
 * [3202] 找出有效子序列的最大长度 II
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
// @lc code=startu
class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
        std::set<int> used;
        int ans=0;
        for(int i=0;i<nums.size();++i){
            for(int j=i+1;j<nums.size();++j){
                int c=2;
                int u=nums[i]%k*3000+nums[j]%k;
                if(used.find(u)!=used.end()) continue;
                used.insert(u);
                for(int z=j+1;z<nums.size();++z){
                    if(c%2&&nums[z]%k==u%3000%k||
                        !(c%2)&&nums[z]%k==u/3000){
                            c++;
                    }
                }
                ans=max(ans,c);
            }
        }
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,3,4,5]\n2\n
// @lcpr case=end

// @lcpr case=start
// [1,4,2,3,1,4]\n3\n
// @lcpr case=end

 */

