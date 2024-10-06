/*
 * @lc app=leetcode.cn id=134 lang=cpp
 * @lcpr version=30204
 *
 * [134] 加油站
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
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        cost[0]=gas[0]-cost[0];
        gas[0]=cost[0];
        int min=cost[0];
        for(int i=1;i<gas.size();i++){
            cost[i]=gas[i]-cost[i]+cost[i-1];//0 开往i+1 站点的油量之后的剩余油量
            min=std::min(min,cost[i]);
            gas[i]=min;//0到达i+1的最大花费··
        }
        min=cost[cost.size()-1];
        for(int i=cost.size()-1;i>=1;--i){
            min=std::min(min,cost[i]);
            if(cost[cost.size()-1]-cost[i-1]+gas[i-1]>=0
                &&min-cost[i-1]>=0) return i;
        }
        cout<<cost[cost.size()-1]<<endl;
        if(cost[cost.size()-1]>=0) return 0;

        return -1;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,3,4,5]\n[3,4,5,1,2]\n
// @lcpr case=end

// @lcpr case=start
// [2,3,4]\n[3,4,3]\n
// @lcpr case=end

 */

