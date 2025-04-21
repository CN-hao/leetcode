/*
 * @lc app=leetcode.cn id=2145 lang=cpp
 * @lcpr version=30204
 *
 * [2145] 统计隐藏数组数目
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
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long  min=0,max=0;
        long long t=0;
        for(int i=0;i<differences.size();i++){
            t+=differences[i];
            min=std::min(t,min);
            max=std::max(t,max);
        }
        t=upper-max+min-lower+1;
        if(t<0){
            return 0;
        }
        return t;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,-3,4]\n1\n6\n
// @lcpr case=end

// @lcpr case=start
// [3,-4,5,1,-2]\n-4\n5\n
// @lcpr case=end

// @lcpr case=start
// [4,-7,2]\n3\n6\n
// @lcpr case=end

 */

