/*
 * @lc app=leetcode.cn id=155 lang=cpp
 * @lcpr version=30204
 *
 * [155] 最小栈
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
class MinStack {
    private:
     vector<int> stack;
     std::multiset<int> minSet;
public:
    MinStack() {
    }
    
    void push(int val) {
        stack.push_back(val);
        minSet.insert(val);
    }
    
    void pop() {
        int val = stack.back();
        stack.pop_back();
        auto it = minSet.find(val);
        minSet.erase(it);
    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {
        return *minSet.begin();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end



/*
// @lcpr case=start
// ["MinStack","push","push","push","getMin","pop","top","getMin"][[],[-2],[0],[-3],[],[],[],[]]\n
// @lcpr case=end

 */

