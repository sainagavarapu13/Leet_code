/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int countNodes(struct TreeNode* root) {
    if(root==NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 1;
    int left = countNodes(root->left);
    int right = countNodes(root->right);
    return left+right+1;
}