/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool checkTree(struct TreeNode* root) {
    int ans=root->left->val+root->right->val;
    if(ans==root->val)
    return 1;
    else return 0;
}