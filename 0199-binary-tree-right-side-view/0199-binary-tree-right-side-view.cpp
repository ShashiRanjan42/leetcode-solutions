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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        if(root == nullptr)
        return v;

        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        int x = 0;

        while(!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();

            if(temp == NULL)
            {
                v.push_back(x);
                x = 0;
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }
            else
            {
                x = temp->val;
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
            }
        }
        return v;
    }
};