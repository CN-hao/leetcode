/*
 * @lc app=leetcode.cn id=3133 lang=cpp
 * @lcpr version=30204
 *
 * [3133] 数组最后一个元素的最小值
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
//水
class Solution {
public:
    long long minEnd(int n, int x) {
        n-=1;
        long long res=x;
        for(int  i=0,j=0;i<64;i++){
            if(!(res&(1ll<<i))&&(n&(1ll<<j++))){
                res|=1ll<<i;
            }
        }
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 3\n4\n
// @lcpr case=end

// @lcpr case=start
// 2\n7\n
// @lcpr case=end

 */

