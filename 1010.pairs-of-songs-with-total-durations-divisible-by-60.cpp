/*
 * @lc app=leetcode.cn id=1010 lang=cpp
 * @lcpr version=30204
 *
 * [1010] 总持续时间可被 60 整除的歌曲
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
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int, unsigned long long > count;
        for (int t : time) {
            count[t % 60]++;
        }
        int result = count[0] * (count[0] - 1)/2 +count[30]*(count[30]-1)/2; // Pairs of songs with duration 0 mod 60
        for(int i = 1; i < 30; ++i) {
            result += count[i] * count[60 - i]; // Pairs of songs with duration i and 60-i
        }
        return result;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [30,20,150,100,40]\n
// @lcpr case=end

// @lcpr case=start
// [60,60,60]\n
// @lcpr case=end

 */

