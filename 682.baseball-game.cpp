/*
 * @lc app=leetcode.cn id=682 lang=cpp
 * @lcpr version=30204
 *
 * [682] 棒球比赛
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
#include <numeric>
#include <vector>
// @lcpr-template-end
// @lc code=start

//离谱ai直接看函数名知题目
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> scores;
        for (auto &op : operations) {
            if (op == "C") {
                scores.pop_back();
            } else if (op == "D") {
                scores.push_back(scores.back() * 2);
            } else if (op == "+") {
                scores.push_back(scores.back() + scores[scores.size() - 2]);
            } else {
                scores.push_back(stoi(op));
            }
        }
        return accumulate(scores.begin(), scores.end(), 0);
    }
};
// @lc code=end



/*
// @lcpr case=start
// ["5","2","C","D","+"]\n
// @lcpr case=end

// @lcpr case=start
// ["5","-2","4","C","D","9","+","+"]\n
// @lcpr case=end

// @lcpr case=start
// ["1"]\n
// @lcpr case=end

 */

