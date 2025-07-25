/*
 * @lc app=leetcode.cn id=2322 lang=cpp
 * @lcpr version=30204
 *
 * [2322] 从树中删除边的最小分数
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
    int minimumScore(vector<int>& nums, vector<vector<int>>& edges) {
        vector<int> v(nums.size(),-1);
        for(int i=edges.size()-1;i>=0;--i){
            int f=edges[i][0];
            int c=edges[i][1];
            if(v[c]==-1) v[c]=nums[c];
            if(v[f]==-1) v[f]=nums[f];
            v[f]=v[f]^v[c];
        }

        for(int i=0;i<nums.size();++i){
            cout<<v[i]<<"  ";
        }   
        cout<<endl;
        int ans=INT_MAX;
        for(int i=0;i<edges.size();++i){
            for(int j=i+1;j<edges.size();++j){
                int a=v[edges[i][1]];
                int b=v[edges[j][1]];
                int c=v[0]^a^b;
                int max,min;
                cout<<a<<" "<<b<<" "<<c<<" "<<endl;
                max=std::max(a,b);
                min=std::min(a,b);
                max=std::max(max,c);
                min=std::min(min,c);
                ans=std::min(ans,max-min);
            }
        }
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,5,5,4,11]\n[[0,1],[1,2],[1,3],[3,4]]\n
// @lcpr case=end

// @lcpr case=start
// [5,5,2,4,4,2]\n[[0,1],[1,2],[5,2],[4,3],[1,3]]\n
// @lcpr case=end

 */

