/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int cnt(struct TreeNode* root){
   	if(root==NULL) return 0;
   return 1 + cnt(root->left) + cnt(root->right);
    
 }
int countNodes(struct TreeNode* root) {
    int ans=cnt( root);
    return ans;
}