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
 void postorder(struct TreeNode* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    a[k++]=root->val;
 }
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    k=0;
    postorder(root);
    * returnSize=k;
    return a;
}