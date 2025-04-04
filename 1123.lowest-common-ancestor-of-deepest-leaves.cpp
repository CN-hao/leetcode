/*
 * @lc app=leetcode.cn id=1123 lang=cpp
 * @lcpr version=30204
 *
 * [1123] 最深叶节点的最近公共祖先
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
class Solution {
private:
int maxd=-1;
TreeNode* ans=nullptr;
int dfs(TreeNode* root,int d){
    if(!root) return d;
    int l=dfs(root->left,d+1);
    int r=dfs(root->right,d+1);
    if(l==r && l>=maxd){
        maxd=l;
        ans=root;
    }
    return max(l,r);
}
public:
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        dfs(root,0);
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [3,5,1,6,2,0,8,null,null,7,4]\n
// @lcpr case=end

// @lcpr case=start
// [1]\n
// @lcpr case=end

// @lcpr case=start
// [0,1,3,null,2]\n
// @lcpr case=end

 */

