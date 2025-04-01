/*
 * @lc app=leetcode.cn id=2140 lang=cpp
 * @lcpr version=30204
 *
 * [2140] 解决智力问题
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
    long long mostPoints(vector<vector<int>>& questions) {
        vector<unsigned long long> v(questions.size()+1, 0);
        for(int i=questions.size()-1;i>=0;i--){
            size_t l=min((size_t)(i+1+questions[i][1]),questions.size());
            v[i]=max(v[l]+questions[i][0], v[i+1]);
        }
        return v[0];
    }
};
// @lc code=end



/*
// @lcpr case=start
// [[3,2],[4,3],[4,4],[2,5]]\n
// @lcpr case=end

// @lcpr case=start
// [[1,1],[2,2],[3,3],[4,4],[5,5]]\n
// @lcpr case=end

 */

