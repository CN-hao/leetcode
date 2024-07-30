/*
 * @lc app=leetcode.cn id=3111 lang=cpp
 * @lcpr version=30204
 *
 * [3111] 覆盖所有点的最少矩形数目
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

auto _{ []() noexcept {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); std::cout.tie(nullptr);
    return 0;
}() };
#pragma g++ optimize(2)
//嚆嚆要100%！
class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        static const auto cmp=[](const vector<int> &a1,const vector<int> &a2){return a1[0]<a2[0];};
        sort(points.begin(),points.end(),cmp); 
        int n=0;
        auto it=points.begin();
    
        while(it!=points.end()){
            ++n;
            it=upper_bound(it,points.end(),vector<int>{(*it)[0]+w,0},cmp);
        }
        return n;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [[2,1],[1,0],[1,4],[1,8],[3,5],[4,6]]\n1\n
// @lcpr case=end

// @lcpr case=start
// [[0,0],[1,1],[2,2],[3,3],[4,4],[5,5],[6,6]]\n2\n
// @lcpr case=end

// @lcpr case=start
// [[2,3],[1,2]]\n0\n
// @lcpr case=end

 */

