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
        //base case
        if(root == nullptr)
        return false;

        if(root->left == NULL && root->right == nullptr)
        {
            if(targetSum == root->val)
            return true;
            else
            return false;
        }

        bool left = hasPathSum(root->left, targetSum-root->val);
        bool right = hasPathSum(root->right, targetSum-root->val);

        if(left || right)
        return true;
        else
        return false;
    }
};