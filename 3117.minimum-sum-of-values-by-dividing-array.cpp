/*
 * @lc app=leetcode.cn id=3117 lang=cpp
 * @lcpr version=30204
 *
 * [3117] 划分数组得到最小的值之和
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
//超时了

class Solution {
int min_sum=INT_MAX;
void dfs(vector<int>& nums, vector<int>& andValues, int i,int j,int addValue, int sum){
    if(i==nums.size()||j==andValues.size()){
        return ;
    }
    addValue&=nums[i];
    if(  (addValue&andValues[j])  !=andValues[j])    {
        return ;
    }
    if(addValue==andValues[j]){
        int new_sum=sum+nums[i];
        if(new_sum<min_sum){
            if(j==andValues.size()-1&&i==nums.size()-1){
                min_sum=new_sum;
            }else{
                dfs(nums,andValues,i+1,j+1,-1,new_sum);
            }
        }
    }
    dfs(nums,andValues,i+1,j,addValue,sum);
}

public:
    int minimumValueSum(vector<int>& nums, vector<int>& andValues) {
        dfs(nums,andValues,0,0,-1,0);
        if(min_sum==INT_MAX){
            return -1;
        }
        return min_sum;
    }
};
// int main(){
//     Solution sol;
//     vector<int> nums={1,2,3,4};
//     vector<int> andValues={32,32,32,32,32,32,108};
//     cout<<sol.minimumValueSum(nums,andValues)<<endl;
//     return 0;
// }
// @lc code=end



/*
// @lcpr case=start
// [1,4,3,3,2]\n[0,3,3,2]\n
// @lcpr case=end

// @lcpr case=start
// [2,3,5,7,7,7,5]\n[0,7,5]\n
// @lcpr case=end

// @lcpr case=start
// [1,2,3,4]\n[2]\n
// @lcpr case=end

 */

