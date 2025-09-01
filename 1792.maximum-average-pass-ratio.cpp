/*
 * @lc app=leetcode.cn id=1792 lang=cpp
 * @lcpr version=30204
 *
 * [1792] 最大平均通过率
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
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        vector<double> d(classes.size());
        double sum=0;
        auto comp=[&](size_t i){return double(classes[i][1]-classes[i][0])/((long long)classes[i][1]*classes[i][1]+classes[i][1]);};
        auto cmp=[&](size_t a,size_t b){return d[a]<d[b];};
        std::priority_queue<size_t,vector<size_t>,decltype(cmp)> pq(cmp);
        for(size_t i=0;i<classes.size();++i){
            d[i]=comp(i);
            pq.push(i);
        }
        for(int i=0;i<extraStudents;++i){
            auto top=pq.top();
            pq.pop();
            ++classes[top][0];++classes[top][1];
            d[top]=comp(top);
            pq.push(top);
        }
        for(auto &vec:classes)  sum+=(double)vec[0]/vec[1];
        return sum/classes.size();
    }
};
// @lc code=end



/*
// @lcpr case=start
// [[1,2],[3,5],[2,2]]\n2\n
// @lcpr case=end

// @lcpr case=start
// [[2,4],[3,9],[4,5],[2,10]]\n4\n
// @lcpr case=end

 */

