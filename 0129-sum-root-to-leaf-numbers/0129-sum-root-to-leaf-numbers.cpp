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
class Solution
{
public:
    int ans = 0;
    int a = 0;
    void sum(TreeNode *root, int &ans, int &a)
    {
        if (root == nullptr)
            return;

        a = a * 10 + root->val;

        if (root->left == nullptr && root->right == nullptr)
        {
            ans += a;
            a /= 10;
        }
        else
        {
            sum(root->left, ans, a);
            sum(root->right, ans, a);
            a /= 10;
        }
    }
    int sumNumbers(TreeNode *root)
    {
        if (root == nullptr)
            return 0;

        sum(root, ans, a);
        return ans;
    }
};