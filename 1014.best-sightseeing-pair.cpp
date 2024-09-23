/*
 * @lc app=leetcode.cn id=1014 lang=cpp
 * @lcpr version=30204
 *
 * [1014] 最佳观光组合
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
    int maxScoreSightseeingPair(vector<int>& values) {
        vector<int> arr(values.size());
        int m=INT_MIN;
        for(int i = values.size()-1; i>0; i--) {
            arr[i] =max(m, values[i]-i);
            m=arr[i];
        }
        m=INT_MIN;
        for(int i = 0; i<values.size()-1; i++) {
            m = max(m, values[i]+i+arr[i+1]);
        }
        return m;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [8,1,5,2,6]\n
// @lcpr case=end

// @lcpr case=start
// [1,2]\n
// @lcpr case=end

 */

