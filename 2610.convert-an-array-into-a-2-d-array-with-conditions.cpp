/*
 * @lc app=leetcode.cn id=2610 lang=cpp
 * @lcpr version=30204
 *
 * [2610] 转换二维数组
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
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> res;
        unordered_map<int, int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto it=m.begin();it!=m.end();it++){
            auto it2=res.begin();
            for(int i=0;i<it->second;i++){
                if(it2==res.end()){
                    res.push_back(vector<int>());
                    it2=res.end()-1;
                }
                it2->push_back(it->first);
                it2++;   
            }
        }
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,3,4,1,2,3,1]\n
// @lcpr case=end

// @lcpr case=start
// [1,2,3,4]\n
// @lcpr case=end

 */

