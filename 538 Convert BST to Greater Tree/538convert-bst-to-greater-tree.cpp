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
    int val=0;
    TreeNode* convertBST(TreeNode* root) {
        if(root==NULL) return root;
        if( root->right) convertBST( root->right);
        int a = root->val +val;
        val+=root->val;
        root->val = a;
        if( root->left) convertBST(root->left);
        return root;
        
    }
};