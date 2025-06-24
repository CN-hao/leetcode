/*
 * @lc app=leetcode.cn id=2200 lang=cpp
 * @lcpr version=30204
 *
 * [2200] 找出数组中的所有 K 近邻下标
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
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
            std::vector<int> res;
            int c=0;
            for(int i=0;i<nums.size()+k;i++){
                int j=i-k-k-1;
                if(i<nums.size()&&nums[i]==key){
                    c++;
                }else if(j>=0 && nums[j]==key){
                    c--;
                }
                if(c&& i>=k){ 
                    res.push_back(i-k);
                }
            }
            return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [3,4,9,1,3,9,5]\n9\n1\n
// @lcpr case=end

// @lcpr case=start
// [2,2,2,2,2]\n2\n2\n
// @lcpr case=end

 */

