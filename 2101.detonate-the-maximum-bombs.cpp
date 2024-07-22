/*
 * @lc app=leetcode.cn id=2101 lang=cpp
 * @lcpr version=30204
 *
 * [2101] 引爆最多的炸弹
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
#include <bitset>
// @lcpr-template-end
// @lc code=start


//队列应该是不需要的不改了
class Solution {
public:
    int maximumDetonation(vector<vector<int>>& bombs) {
        std::bitset<100> bs;
        int max = 0;
        std::queue<int> q;
        // sort(bombs.begin(), bombs.end(), [](const vector<int>& a, const vector<int>& b){
        //     return a[2] > b[2];
        // });
        // for(auto bomb : bombs){
        //     cout << bomb[0] << " " << bomb[1] << " " << bomb[2] << endl;
        // }
        for (int i = 0; i < bombs.size(); i++){
            if(bs.test(i)) continue;
            std::bitset<100> bs2;
            bs.set(i);
            bs2.set(i);
            q.push(i);
            int count = 1;
            while(!q.empty()){
                int j = q.front();
                std::cout << bombs[j][0]<< " " << bombs[j][1] << " " << bombs[j][2] <<"\n";
                q.pop();
                for (int k = 0; k < bombs.size(); k++){
                    if(bs2.test(k)) continue;
                    if(in(bombs[j][0], bombs[j][1], bombs[j][2], bombs[k][0], bombs[k][1])){
                        bs.set(k);
                        bs2.set(k);
                        q.push(k);
                        count++;
                    }
                }
            }
            if(count > max) max = count;
        }
        return max;
    }
    bool in(long x1, long y1 ,long r, long x2, long y2) {
        return (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) <= r*r;
    
    }
};
// @lc code=end



/*
// @lcpr case=start
// [[2,1,3],[6,1,4]]\n
// @lcpr case=end

// @lcpr case=start
// [[1,1,5],[10,10,5]]\n
// @lcpr case=end

// @lcpr case=start
// [[1,2,3],[2,3,1],[3,4,2],[4,5,3],[5,6,4]]\n
// @lcpr case=end

 */

