/*
 * @lc app=leetcode.cn id=1745 lang=cpp
 * @lcpr version=30204
 *
 * [1745] 分割回文串 IV
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
#include <string>
// @lcpr-template-end
// @lc code=start
//感觉不算困难题目，回文字符串没有考虑到可以使用动态规划。
//但是我的题解使用空间少了O(n),也算有点可取之处。
class Solution {

bool isPalindrome(string::iterator begin, string::iterator end){
    if(begin>end) return false;
    while(begin<end){
        if(*begin!=*end) return false;
        begin++;
        end--;
    }
    return true;
    
}
public:
    bool checkPartitioning(string s) {
        vector<string::iterator> v1;
        vector<string::iterator> v2;
        for(auto it=s.begin();it!=s.end();it++){
            if(isPalindrome(s.begin(), it)){
                v1.push_back(it);
            }
            if(isPalindrome(it, s.end()-1)){
                v2.push_back(it);
            }
        }
        for(auto it1=v1.begin();it1!=v1.end();it1++){
            for(auto it2=v2.rbegin();it2!=v2.rend()&&*it2>*it1+1;it2++){
                if(isPalindrome(*it1+1, *it2-1)) return true;
            }
        }
        return false;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "abcbdd"\n
// @lcpr case=end

// @lcpr case=start
// "bcbddxy"\n
// @lcpr case=end

 */

