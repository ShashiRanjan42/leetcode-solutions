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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
        vector<int> v1;
        if(root == NULL)
        return v;

        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        int count = 0;

        while(!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();

            if(temp == nullptr)
            {
                if(count%2 != 0)
                {
                    reverse(v1.begin(),v1.end());
                }
                v.push_back(v1);
                v1.clear();
                count++;
                
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }
            else
            {
                v1.push_back(temp->val);

                if(temp->left)
                q.push(temp->left);
    
                if(temp->right)
                q.push(temp->right);
            }  
        }

        return v;
    }
};