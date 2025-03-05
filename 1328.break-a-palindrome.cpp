/*
 * @lc app=leetcode.cn id=1328 lang=cpp
 * @lcpr version=30204
 *
 * [1328] 破坏回文串
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
//小坑很烦
class Solution {
public:
    string breakPalindrome(string palindrome) {
        if(palindrome.size()==1) return "";
        int n=palindrome.size()/2;
        for(int i=0;i<n;i++){
            if(palindrome[i]!='a'){
                palindrome[i]='a';
                return palindrome;
            }
        }
        palindrome.back() = 'b';
        return palindrome;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "abccba"\n
// @lcpr case=end

// @lcpr case=start
// "a"\n
// @lcpr case=end

 */

