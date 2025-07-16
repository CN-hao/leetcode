/*
 * @lc app=leetcode.cn id=12 lang=cpp
 * @lcpr version=30204
 *
 * [12] 整数转罗马数字
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
const string a[4][2]={
    {"I","V"},
    {"X","L"},
    {"C","D"},
    {"M","?"},
};
private:
string fun(int n,int w){
    if(!n) return "";
    string ans="";
    if(n>=4){
        ans+=a[w][n!=4&&n!=9];
        if(n==9||n==4) { ans+=a[w+(n==9)][n==4]; return ans; }
    }
    for(int i=0;i<n%5;++i) ans+=a[w][0];
    return ans;
}
public:
    string intToRoman(int num) {
        string ans;
        for(int i=0;num!=0;++i,num/=10)  ans=fun(num%10,i)+ans;
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 3749\n
// @lcpr case=end

// @lcpr case=start
// 58\n
// @lcpr case=end

// @lcpr case=start
// 1994\n
// @lcpr case=end

 */

