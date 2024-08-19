/*
 * @lc app=leetcode.cn id=3154 lang=cpp
 * @lcpr version=30204
 *
 * [3154] 到达第 K 级台阶的方案数
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
#include <map>
#include <unordered_set>
#include <utility>
#include <vector>
// @lcpr-template-end
// @lc code=start
//有巧妙的数学方法 不改了 这个巨慢但是能过 水
class Solution {

    private:
    map<vector<int>,int> mp{};
    int k;
    int dfs(bool pIsDown,int i,int jump) {
        if(i>k+1||i==-1){
            return 0;
        }
        int res=i==k;
        if(!pIsDown){
            if(mp.find({true,i-1,jump})==mp.end()){
                mp[{true,i-1,jump}]=dfs(true,i-1,jump);
            }
            res+=mp[{true,i-1,jump}];

        }
        if(mp.find({false,i+jump,jump<<1})==mp.end()){
                mp[{false,i+jump,jump<<1}]=dfs(false,i+jump,jump<<1);
            }
            res+=mp[{false,i+jump,jump<<1}];
        return res;
    }
public:
    int waysToReachStair(int k) {
        this->k=k;
        return dfs(false,1,1);
    }
};
// int main(){
//     Solution s;
//     cout<<s.waysToReachStair(955774915);
// }

// @lc code=end



/*
// @lcpr case=start
// 0\n
// @lcpr case=end

// @lcpr case=start
// 1\n
// @lcpr case=end

 */

