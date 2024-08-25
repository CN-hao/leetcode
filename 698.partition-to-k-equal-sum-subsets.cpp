/*
 * @lc app=leetcode.cn id=698 lang=cpp
 * @lcpr version=30204
 *
 * [698] 划分为k个相等的子集
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
#include <numeric>
#include <map>
// @lcpr-template-end
// @lc code=start

//复杂了 
class Solution {
    u_int16_t used={0};
    int k;
    int target;
    int nums_size;
    vector<int > nums;
    vector<u_int16_t> mv;
    void init_dfs(vector<int>& nums,int sum,int idx){
        for(int i=idx;i<nums.size();i++){
            used|=(1<<i);
            int t_sum=sum+nums[i];
            init_dfs(nums,t_sum,i+1);
            if(t_sum==target){
                mv.push_back(used);
            }
            used&=~(1<<i);
            if(t_sum>target){
                return ;
            }
        }
    }
    bool dfs(int idx){
        if(idx==k){
            cout<<used<<endl;
            return true;
        }
        for(int i=idx;i<mv.size();i++){
            if((used&mv[i])==0){
                used|=mv[i];
                if(dfs(idx+1)){
                    return true;
                }
                used&=~mv[i];
            }
        }
        return false;
    }
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%k!=0){
            return false;
        }
        target=sum/k;
        sort(nums.begin(),nums.end());
        if(target<nums.back()){
            return false;
        }
        this->k=k;
        nums_size=nums.size();
        init_dfs(nums,0,0);
        used=0;
        this->nums=nums;
        return dfs(0);
    }
};
// class Solution {
// public:
//     bool canPartitionKSubsets(vector<int>& nums, int k) {
//         int sum = accumulate(nums.begin(), nums.end(), 0);
//         if (sum % k) 
//             return false; 
//         else 
//             sum /= k;

//         vector sel(k, 0);
        
//         sort(nums.rbegin(), nums.rend());

//         auto dfs = [&, end = nums.cend()](auto&& dfs, auto&& it) {
//             if (it == end) 
//                 return true;
//             for (size_t i = 0; i < k; i++)
//             {
//                 if (sel[i] + *it > sum || (i && sel[i - 1] == sel[i])) 
//                     continue;

//                 sel[i] += *it;
//                 if (dfs(dfs, it + 1)) 
//                     return true;
//                 sel[i] -= *it;

//             }
//             return false;
//         };
//         return nums[0] <= sum && dfs(dfs, nums.cbegin());
//     }
// };
// int main(){
//     Solution s;
//     vector<int> nums={129,17,74,57,1421,99,92,285,1276,218,1588,215,369,117,153,22};
//     cout<<s.canPartitionKSubsets(nums,3);
//     return 0;
// }
// @lc code=end



/*
// @lcpr case=start
// [4, 3, 2, 3, 5, 2, 1]\n4\n
// @lcpr case=end

// @lcpr case=start
// [1,2,3,4]\n3\n
// @lcpr case=end

 */

