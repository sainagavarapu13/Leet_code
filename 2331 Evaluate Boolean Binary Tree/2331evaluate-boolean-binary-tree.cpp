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
bool fun(TreeNode* root){
     if( root->val>1) {
            if( root->val == 2) return fun(root->right) |fun(root->left);
            else if( root->val == 3) return fun(root->right) & fun(root->left);
        }
        return root->val;
}
    bool evaluateTree(TreeNode* root) {
       return fun(root);
    }
};