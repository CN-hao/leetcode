/*
 * @lc app=leetcode.cn id=2749 lang=cpp
 * @lcpr version=30204
 *
 * [2749] 得到整数零需要执行的最少操作数
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
    int makeTheIntegerZero(int num1, int num2) {
        auto countOnes = [](unsigned long long n) {
            int count = 0;
            while (n) {
                n &= (n - 1); // 每次清掉最低位的 1
                count++;
                
            }
            return count;
        };
        long long n=num1;
        for(int i=1;(n-=num2)>0;++i){
            int min=countOnes(n);
            if(i>=min&&i<=n){
                return i;
            }
        }
        return 2;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 3\n-2\n
// @lcpr case=end

// @lcpr case=start
// 5\n7\n
// @lcpr case=end

 */

