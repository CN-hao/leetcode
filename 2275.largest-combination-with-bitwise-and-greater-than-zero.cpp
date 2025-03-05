/*
 * @lc app=leetcode.cn id=2275 lang=cpp
 * @lcpr version=30204
 *
 * [2275] 按位与结果大于零的最长组合
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
    int largestCombination(vector<int>& candidates) {
        dfs(1, 1, candidates[0], candidates);
        return max_len;
    }
private:
    int max_len=1;
    void dfs(int idx, int len,int mask, vector<int>& candidates) {
        if(idx == candidates.size()) {
            return ;
        }
        if((mask&candidates[idx])) {
            max_len = std::max(max_len, len+1);
            dfs(idx+1, len+1, mask&candidates[idx], candidates);
        }
        dfs(idx+1, len, mask, candidates);
    }
};
// @lc code=end


/*
// @lcpr case=start
// [16,17,71,62,12,24,14]\n
// @lcpr case=end

// @lcpr case=start
// [8,8]\n
// @lcpr case=end

 */

