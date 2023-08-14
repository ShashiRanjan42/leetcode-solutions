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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        //base case
        if(nums.size() == 0)
        return nullptr;


        int maxi = -1;
        int index = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] > maxi)
            {
                maxi = nums[i];
                index = i;
            }
        }
        TreeNode* root = new TreeNode(maxi);
        vector<int> v1;
        vector<int> v2;
        for(int i=0; i<index; i++)
        {
            v1.push_back(nums[i]);
        }
        for(int i=index+1; i<nums.size(); i++)
        {
            v2.push_back(nums[i]);
        }
        
        root->left = constructMaximumBinaryTree(v1);
        root->right = constructMaximumBinaryTree(v2);

        return root;
    }
};