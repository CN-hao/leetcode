// @lcpr-before-debug-begin




// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=1870 lang=cpp
 * @lcpr version=30204
 *
 * [1870] 准时到达的列车最小时速
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
#include <cmath>
// @lcpr-template-end
// @lc code=start
class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        std::ios::sync_with_stdio(false);
        if(dist.size()-1>=hour) return -1;
        int max=dist[0];
        double sum=0;
        for(int i=1;i<dist.size()-1;i++){
            max=std::max(max,dist[i]);
            sum+=dist[i];
        }
        if(dist.back()/(double)(max)>hour-dist.size()+1) {
            auto t=dist.back()/(hour-dist.size()+1);
            return t+(t-(int)t>1e-6);
        }
        int max_t=max;
        int min=ceil(sum/hour);
        int mid;
        while(min<=max){
            mid=(min+max)/2;
            double h=0;
            for(int i=0;i<dist.size()-1;i++){
                h+=ceil(dist[i]/(double)mid);
            }
            h+=dist.back()/(double)mid;
            if(h<=hour){
                max=mid-1;
            }else{
                min=mid+1;
                if(mid+1<=max_t) mid++;
            }
        }
        return mid;
    }
};
// @lc code=end


// @lcpr-div-debug-arg-start
// funName=minSpeedOnTime
// paramTypes= ["number[]","number"]
// @lcpr-div-debug-arg-end




/*
// @lcpr case=start
// [1,3,2]\n6\n
// @lcpr case=end

// @lcpr case=start
// [1,3,2]\n2.7\n
// @lcpr case=end

// @lcpr case=start
// [1,3,2]\n1.9\n
// @lcpr case=end

 */

