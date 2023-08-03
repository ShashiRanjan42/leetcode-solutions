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
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<int> v;
        vector<vector<int>> ans;
        // by queue
        // base case
        if (root == NULL)
            return ans;

        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);

        while (!q.empty())
        {

            TreeNode *temp = q.front();
            q.pop();

            if (temp == NULL)
            {
                if (!q.empty())
                {
                    q.push(NULL);
                    ans.push_back(v);
                    v.clear();
                }
            }
            else
            {
                int a = temp->val;
                v.push_back(a);
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
        ans.push_back(v);
        return ans;
    }
};