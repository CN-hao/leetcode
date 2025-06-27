/*
 * @lc app=leetcode.cn id=427 lang=cpp
 * @lcpr version=30204
 *
 * [427] 建立四叉树
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
/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
private:
    Node* bulid(vector<vector<int>>& grid,int x1, int y1, int x2, int y2) {
        if(x1 == x2) {
            return new Node(grid[y1][x1], true);
        }
        Node* node = new Node();
        node->topLeft = bulid(grid, x1, y1, (x1 + x2) / 2, (y1 + y2) / 2);
        node->topRight = bulid(grid, (x1+ x2) / 2+1, y1, x2, (y1 + y2) / 2);
        node->bottomLeft = bulid(grid, x1, (y1 + y2) / 2+1, (x1 + x2) / 2, y2);
        node->bottomRight = bulid(grid, (x1 + x2) / 2+1, (y1 + y2) / 2+1, x2, y2);
        if(node->topLeft->isLeaf && node->topRight->isLeaf && node->bottomLeft->isLeaf && node->bottomRight->isLeaf) {
            if(node->topLeft->val == node->topRight->val && node->topLeft->val == node->bottomLeft->val && node->topLeft->val == node->bottomRight->val) {
                node->val = node->topLeft->val;
                node->isLeaf = true;
                delete node->topLeft;
                delete node->topRight;
                delete node->bottomLeft;
                delete node->bottomRight;
                node->topLeft = nullptr;
                node->topRight = nullptr;
                node->bottomLeft = nullptr;
                node->bottomRight = nullptr;
            } else {
                node->isLeaf = false;
            }
        } else {
            node->isLeaf = false;
        }
        return node;
    }
public:
    Node* construct(vector<vector<int>>& grid) {
        int n = grid.size();
        if(n == 0) return nullptr;
        Node*  node=bulid(grid, 0, 0, n - 1, n - 1);
        return node;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [[0,1],[1,0]]\n
// @lcpr case=end

// @lcpr case=start
// [[1,1,1,1,0,0,0,0],[1,1,1,1,0,0,0,0],[1,1,1,1,1,1,1,1],[1,1,1,1,1,1,1,1],[1,1,1,1,0,0,0,0],[1,1,1,1,0,0,0,0],[1,1,1,1,0,0,0,0],[1,1,1,1,0,0,0,0]]\n
// @lcpr case=end

 */

