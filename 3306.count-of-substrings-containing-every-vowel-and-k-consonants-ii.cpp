/*
 * @lc app=leetcode.cn id=3306 lang=cpp
 * @lcpr version=30204
 *
 * [3306] 元音辅音字符串计数 II
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
#include<arrray>
#include <vector>
// @lcpr-template-end
// @lc code=start
class Solution {
public:
    long long countOfSubstrings(string word, int k) {
        vector<array> v1(word.size()+1, 0);
        
        for(int i=1;i<=word.size();i++){
            if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'){
                v1[i]=v[i-1]+1;
            }else{
                v1[i]=v1[i-1];
            }
        }
        
    }
};
// @lc code=end



/*
// @lcpr case=start
// "aeioqq"\n1\n
// @lcpr case=end

// @lcpr case=start
// "aeiou"\n0\n
// @lcpr case=end

// @lcpr case=start
// "ieaouqqieaouqq"\n1\n
// @lcpr case=end

 */

