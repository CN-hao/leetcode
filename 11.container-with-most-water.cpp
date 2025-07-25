/*
 * @lc app=leetcode.cn id=11 lang=cpp
 * @lcpr version=30204
 *
 * [11] 盛最多水的容器
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
    int maxArea(vector<int>& height) {
            vector<int> left(height.size());
            vector<int> right(height.size());
            for(int i = 1; i < height.size(); ++i) {
                if(height[i]>= height[left[i - 1]]) {
                    left[i] = i;
                } else{
                    left[i] = left[i - 1];
                }
            }
            for(int i = height.size() - 2; i >= 0; --i) {
                if(height[i] >= height[right[i + 1]]) {
                    right[i] = i;
                } else {
                    right[i] = right[i + 1];
                }
            }
            
            int maxArea = 0;
            int i=0;
            while(i<height.size()){
                int h= min(height[left[i]], height[right[i]]);
                int w = abs(right[i] - left[i]);
                cout<<"i: " << i << " h: " << h << " w: " << w << endl;
                maxArea = max(maxArea, h * w);
                i= right[i]>i? right[i] : i+1;
            }
            return maxArea;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,8,6,2,5,4,8,3,7]\n
// @lcpr case=end

// @lcpr case=start
// [1,1]\n
// @lcpr case=end

 */

