//https://leetcode.com/problems/search-in-a-binary-search-tree/

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
    TreeNode* searchBST(TreeNode* root, int val)
    {
        if(root==NULL)
            return NULL;
        if(val == root->val)
            return root;
        else if(val < root->val)
            root->left = searchBST(root->left, val);
        else
            root->right = searchBST(root->right, val);
	    return (val < root->val)?root->left:root->right;
    }
};