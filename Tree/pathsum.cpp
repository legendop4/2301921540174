//LEETCODE PROBLEM  Path Sum
// LINK :https://leetcode.com/problems/path-sum/
// submission detail : https://leetcode.com/submissions/detail/1530834812/


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
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if( !root )return false;
        if(!root-> left && !root-> right )
            return root->val == targetSum;
        return hasPathSum(root->left, targetSum-root->val)||hasPathSum(root->right, targetSum-root->val);
    }
};
