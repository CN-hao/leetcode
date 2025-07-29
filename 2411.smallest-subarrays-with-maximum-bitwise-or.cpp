/*
 * @lc app=leetcode.cn id=2411 lang=cpp
 * @lcpr version=30204
 *
 * [2411] 按位或最大的最小子数组长度
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
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        vector<vector<char>> v(n);
        int a[30]={0};
        int end=n-1;
        for(int i=n-1;i>=0;--i){
            int t=nums[i];
            for(int k=0;t;t=t>>1,++k){
                if(t%2) v[i].push_back(k);
            }
            for(int c:v[i])a[c]++;
            cout<<endl;
            for(int j=end,p=1;p&&j>i;--j){
                for(int c:v[end]) if(a[c]<2){p=0;break;}
                if(!p) break;
                for(int c:v[end]) a[c]--;
                end--;
            }
            ans[i]=end+1-i;
        }
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,0,2,1,3]\n
// @lcpr case=end

// @lcpr case=start
// [0]\n
// @lcpr case=end

 */

