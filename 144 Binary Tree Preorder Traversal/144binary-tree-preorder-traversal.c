/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int a[101];
 int i=0;
 void pre(struct TreeNode* root){
    if( root==NULL) return ;
    a[i++]=root->val;
    pre(root->left);
    pre(root->right);
 }
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    i=0;
pre(root);
    * returnSize = i;
    return a;
}