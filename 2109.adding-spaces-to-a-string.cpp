/*
 * @lc app=leetcode.cn id=2109 lang=cpp
 * @lcpr version=30204
 *
 * [2109] 向字符串添加空格
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
    string addSpaces(string s, vector<int>& spaces) {
        string res="";
        int j=0;
        for(int i=0;i<s.size();i++){
            if(j<spaces.size()&&i==spaces[j]){
                res+=" ";
                ++j;
            }
            res+=s[i];
        }
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "LeetcodeHelpsMeLearn"\n[8,13,15]\n
// @lcpr case=end

// @lcpr case=start
// "icodeinpython"\n[1,5,7,9]\n
// @lcpr case=end

// @lcpr case=start
// "spacing"\n[0,1,2,3,4,5,6]\n
// @lcpr case=end

 */

