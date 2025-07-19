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
 int k=0;
 void inorder(struct TreeNode* root){
    if(root==NULL) return;
    inorder(root->left);
    a[k++]=root->val;
    inorder(root->right);
 }
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    k=0;
    inorder(root);
    * returnSize=k;
    return a;
}