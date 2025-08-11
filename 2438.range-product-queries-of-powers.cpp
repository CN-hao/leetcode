/*
 * @lc app=leetcode.cn id=2438 lang=cpp
 * @lcpr version=30204
 *
 * [2438] 二的幂数组中查询范围内的乘积
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
class Solution
{
public:
    vector<int> productQueries(int n, vector<vector<int>> &queries)
    {
        unordered_map<int,int> m;
        m[0]=1;
        for(int i=1;i<435;++i){
            m[i]=(m[i-1]<<1)%(int)(1e9+7);
        }
        vector<int> prefixesAnd;
        int sum = 0;
        int b = 0;
        do{
            if (n & 1)
                prefixesAnd.push_back(sum+=b);
            ++b;
        } while (n >>= 1);
        vector<int> ans;
        for(auto &vec:queries){
            int a=prefixesAnd[vec[1]];
            if(vec[0]) a-=prefixesAnd[vec[0]-1];
            ans.push_back(m[a]);
        }
        return ans;
    }
};
// @lc code=end

/*
// @lcpr case=start
// 15\n[[0,1],[2,2],[0,3]]\n
// @lcpr case=end

// @lcpr case=start
// 2\n[[0,0]]\n
// @lcpr case=end

 */
