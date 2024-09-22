/*
 * @lc app=leetcode.cn id=3145 lang=cpp
 * @lcpr version=30204
 *
 * [3145] 大数组元素的乘积
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
    vector<int> findProductsOfElements(vector<vector<long long>>& queries) {
        long long t=1;
        long long sum=0;
        for(long long  i=0;sum<=(long long)1e15;i++){
            sum=sum*2+t;
            cout<<i<<" "<<t<<" "<<sum<<"X";
            t<<=1;
        }
        return {};
    }
};
// @lc code=end



/*
// @lcpr case=start
// [[1,3,7]]\n
// @lcpr case=end

// @lcpr case=start
// [[2,5,3],[7,7,4]]\n
// @lcpr case=end

 */

