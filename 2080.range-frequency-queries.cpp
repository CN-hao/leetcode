/*
 * @lc app=leetcode.cn id=2080 lang=cpp
 * @lcpr version=30204
 *
 * [2080] 区间内查询数字的频率
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
class RangeFreqQuery {
private:
    unordered_map<int, vector<int>> map;
public:
    RangeFreqQuery(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            map[arr[i]].push_back(i);
        }
    }
    int query(int left, int right, int value) {
        if(map.find(value)==map.end()) return 0;
        auto rit=lower_bound(map[value].rbegin(), map[value].rend(), right, 
                greater<int>());
        if(rit==map[value].rend()) return 0;
        auto lit=upper_bound(map[value].rbegin(), map[value].rend(), left,
                greater<int>());
        if(lit==map[value].rend()) return map[value].rend()-rit;
        return lit-rit;
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */
// @lc code=end



/*
// @lcpr case=start
// ["RangeFreqQuery", "query", "query"][[[12, 33, 4, 56, 22, 2, 34, 33, 22, 12, 34, 56]], [1, 2, 4], [0, 11, 33]]\n
// @lcpr case=end

 */

