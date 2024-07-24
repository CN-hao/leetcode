/*
 * @lc app=leetcode.cn id=2844 lang=cpp
 * @lcpr version=30204
 *
 * [2844] 生成特殊数字的最少操作
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

//今天题目比较水， 用时还挺长废了啊哦
class Solution {
public:
    int minimumOperations(string num) {
        bool p1=false;//00 50
        bool p2=false;//25 75
        int i;
        int n=num.size();
        for(i=n-1; i>=0; i--) {
            if(p1&&(num[i]=='0'||num[i]=='5')) {
                break;
            }else if(p2&&(num[i]=='2'||num[i]=='7')) {
                break;
            }
            if(!p1&&num[i]=='0') {
                p1=true;
            }else if(!p2&&num[i]=='5') {
                p2=true;
            }
        }
        if(i<0) {
            if(p1) return n-1;
            return n;
        }else {
            return n-i-2;
        }
    }
};
// @lc code=end



/*
// @lcpr case=start
// "2245047"\n
// @lcpr case=end

// @lcpr case=start
// "2908305"\n
// @lcpr case=end

// @lcpr case=start
// "10"\n
// @lcpr case=end

 */

