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
TreeNode* solve(vector<int> nums, int s, int e)
{
    //base case
    if(s > e)
    return nullptr;

    int mid = s+(e-s)/2;
    int node = nums[mid];
    TreeNode* root = new TreeNode(node);

    root->left = solve(nums,s,mid-1);
    root->right = solve(nums,mid+1,e);

    return root;
}
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int s = 0;
        int e = nums.size()-1;

        return solve(nums,s,e);
        
    }
};