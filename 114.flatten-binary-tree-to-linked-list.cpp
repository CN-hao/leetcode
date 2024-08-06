/*
 * @lc app=leetcode.cn id=114 lang=cpp
 * @lcpr version=30204
 *
 * [114] 二叉树展开为链表
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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
//水一题今日一题不会 240807
class Solution {
    TreeNode* _flatten(TreeNode* root) {
        if(root == nullptr) return nullptr;
        TreeNode *l=_flatten(root->left);
        TreeNode *r=_flatten(root->right);
        
        if(l==nullptr&&r==nullptr) {
            return root;
        }else if(l==nullptr) {
            return r;
        }
        l->right = root->right;
        root->right = root->left;
        root->left = nullptr;
        return r==nullptr?l:r;
    }
public:
    void flatten(TreeNode* root) {
        _flatten(root);
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,5,3,4,null,6]\n
// @lcpr case=end

// @lcpr case=start
// []\n
// @lcpr case=end

// @lcpr case=start
// [0]\n
// @lcpr case=end

 */

