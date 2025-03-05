
/*
 * @lc app=leetcode.cn id=42 lang=cpp
 * @lcpr version=30204
 *
 * [42] 接雨水
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
    int trap(vector<int>& height) {
        int sum=0;
        vector<int> left(height.size(),0);
        left[0]=height[0];
        for(int i=1;i<height.size();i++){
            left[i]=max(left[i-1],height[i]);
        }
        int right=height[height.size()-1];
        for(int i=height.size()-2;i>=0;i--){
            right=max(right,height[i]);
            int h=min(left[i],right);
            if(h>height[i]) sum+=h-height[i];
        }
        
        return sum;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [0,1,0,2,1,0,1,3,2,1,2,1]\n
// @lcpr case=end

// @lcpr case=start
// [4,2,0,3,2,5]\n
// @lcpr case=end

 */

