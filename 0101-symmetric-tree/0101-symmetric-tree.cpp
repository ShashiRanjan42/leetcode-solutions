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
    bool isSymmetric(TreeNode* root) {
        //By queue traversal Method
        // if(root == nullptr)
        // return true;
        // TreeNode* left;
        // TreeNode* right;

        // queue<TreeNode*> q1,q2;
        // q1.push(root->left);
        // q2.push(root->right);

        // while(!q1.empty() && !q2.empty())
        // {
        //     left = q1.front();
        //     right = q2.front();
        //     q1.pop();
        //     q2.pop();

        //     if(left == NULL && right == NULL)
        //     continue;
        //     if(left == NULL || right == NULL)
        //     return false;

        //     if(left->val != right->val)
        //     return false;

        //     q1.push(left->left);
        //     q1.push(left->right);
        //     q2.push(right->right);
        //     q2.push(right->left);
        // }
        // return true;

        // By Recursively
        if(root == NULL)
        return true;

        return helper(root->left, root->right);

    }

    bool helper(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) {
            return true;
        } else if (p == nullptr || q == nullptr) {
            return false;
        }
        
        if (p->val != q->val) {
            return false;
        }
        
        return helper(p->left,q->right) && helper(p->right, q->left); 
    }
};