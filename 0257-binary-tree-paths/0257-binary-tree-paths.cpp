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
    void binaryPath(TreeNode* root, vector<string> &v, string s)
    {
        //base case
        if(root->left == nullptr && root->right == nullptr)
        {
            v.push_back(s);
        }

        if(root->left)
        {
            binaryPath(root->left,v,s +"->"+ to_string(root->left->val));
        }
        if(root->right)
        {
            binaryPath(root->right,v,s +"->"+ to_string(root->right->val));
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string s;
        vector<string> v;
        if(root == nullptr)
        return v;

        s += to_string(root->val);
        binaryPath(root,v,s);
        return v;
    }
};