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
    int sum = 0;
    int sumOfLeftLeaves(TreeNode* root) {
        //base case
        if(root == nullptr)
        return 0;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();

            if (temp->left && temp->left->left == nullptr && temp->left->right == nullptr)    {
                sum += temp->left->val;
            }

            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);

        }

        return sum;
        
    }
};