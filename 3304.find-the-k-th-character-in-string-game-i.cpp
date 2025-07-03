/*
 * @lc app=leetcode.cn id=3304 lang=cpp
 * @lcpr version=30204
 *
 * [3304] 找出第 K 个字符 I
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
    char kthCharacter(int k) {
        int arr[]={1,2,4,8,16,32,64,128,256,512};
        int *p;
        int c=0;
        while((p=lower_bound(begin(arr),end(arr),k)-1)-arr>=0){
            cout<<*p<<" ";
            k=k-*p;
            c++;
        }
        return 'a'+c;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 5\n
// @lcpr case=end

// @lcpr case=start
// 10\n
// @lcpr case=end

 */

