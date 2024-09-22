/*
 * @lc app=leetcode.cn id=3007 lang=cpp
 * @lcpr version=30204
 *
 * [3007] 价值和小于等于 K 的最大数字
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
    long long findMaximumNumber(long long k, int x) {
        unordered_map<int,int> mp;
        long long sum=0;
        long long  i;
        long long mask;
        for(int i=x-1;i<=63;i+=x){
            mask|=1ll<<i;
        }
        for(i=1;1;i++){
            long long m=i&mask;
            if(mp.find(m)==mp.end()){
                long long s=0;
                for(long long  j=x-1;j<=63;j+=x){
                    if(m&(1ll<<j)){
                        ++s;
                    }
                }
                mp[m]=s;
            }
            sum+=mp[m];
            if(sum>k){
                goto ret;
            }
        }
        ret:
        return i-1;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 9\n1\n
// @lcpr case=end

// @lcpr case=start
// 7\n2\n
// @lcpr case=end

 */

