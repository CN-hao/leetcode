/*
 * @lc app=leetcode.cn id=2961 lang=cpp
 * @lcpr version=30204
 *
 * [2961] 双模幂运算
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

//学了一手快速幂 不错
class Solution {
    int pow_mod(int x, int y, int mod) {
        int res = 1;
        while (y) {
            if (y & 1) {
                res = res * x % mod;
            }

            x = x * x % mod;
            y >>= 1;
        }   
    return res;
    }

public:
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        vector<int> res;
        for (int i = 0; i < variables.size(); i++) {
            int t=pow_mod(variables[i][0],variables[i][1],10);
            t=pow_mod(t,variables[i][2],variables[i][3]);
            if(t==target) res.push_back(i);
        }
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [[2,3,3,10],[3,3,3,1],[6,1,1,4]]\n2\n
// @lcpr case=end

// @lcpr case=start
// [[39,3,1000,1000]]\n17\n
// @lcpr case=end

 */

