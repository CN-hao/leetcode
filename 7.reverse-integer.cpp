/*
 * @lc app=leetcode.cn id=7 lang=cpp
 * @lcpr version=30204
 *
 * [7] 整数反转
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
//水 有漏洞  测试用例没有测试到 
class Solution {
public:
    int reverse(int x) {
        if(x==INT_MIN) return 0;
        int sign=x>0?1:-1;
        x=abs(x);
        int ans=0;
        do
        {
            ans=ans*10+x%10;
            if(ans>214748364&&x/10!=0) return 0;
        } while (x/=10);
        return ans*sign;
        
    }
};
// @lc code=end



/*
// @lcpr case=start
// 123\n
// @lcpr case=end

// @lcpr case=start
// -123\n
// @lcpr case=end

// @lcpr case=start
// 120\n
// @lcpr case=end

// @lcpr case=start
// 0\n
// @lcpr case=end

 */

