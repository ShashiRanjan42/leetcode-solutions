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
    int minDepth(TreeNode* root) {
        // base case
        if(root == nullptr)
        return 0;

        if(root->left == nullptr && root->right == nullptr)
        return 1;

        if(root->left == nullptr)
        return minDepth(root->right)+1;

        if(root->right == nullptr)
        return minDepth(root->left)+1;

        int leftAns = minDepth(root->left);
        int rightAns = minDepth(root->right);
        int ans = min(leftAns,rightAns) + 1;
        return ans;
    }
};