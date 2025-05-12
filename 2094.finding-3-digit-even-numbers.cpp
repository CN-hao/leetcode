/*
 * @lc app=leetcode.cn id=2094 lang=cpp
 * @lcpr version=30204
 *
 * [2094] 找出 3 位偶数
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
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> a1(10, 0);
        vector<int> ans;
        for(int d:digits) {
            a1[d]++;
        }
        for(int i=1; i<10; i++) {
            if(a1[i] > 0) {
                a1[i]--;
                for(int j=0; j<10; j++) {
                    if(a1[j] > 0) {
                        a1[j]--;
                        for(int k=0; k<10; k++) {
                            if(a1[k] > 0 && k%2 == 0) {
                                ans.push_back(i*100 + j*10 + k);
                            }
                        }
                        a1[j]++;
                    }
                }
                a1[i]++;
            }
        }
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [2,1,3,0]\n
// @lcpr case=end

// @lcpr case=start
// [2,2,8,8,2]\n
// @lcpr case=end

// @lcpr case=start
// [3,7,5]\n
// @lcpr case=end

 */

