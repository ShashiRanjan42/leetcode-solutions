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
// class Solution {
// public:
//     int count = 0;
//     void counttree(TreeNode* root, int &count)
//     {
//         if(root == nullptr)
//         return;

//         if(root->val)
//         {
//             count++;
//         }

//         counttree(root->left,count);
//         counttree(root->right,count);
//     }
//     int countNodes(TreeNode* root) {
//         if(root == nullptr)
//         return 0;

//         counttree(root,count);
//         return count;
//     }
// };

 class Solution {
	public:
		int countNodes(TreeNode* root) {
			if(root==NULL)
			{
				return 0;
			}
			else
			{
				return countNodes(root->left)+countNodes(root->right)+1;
			}
		}
	};