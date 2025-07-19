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
  int b=0;
 void pre(struct TreeNode* root,int *ptr){
    if(root==NULL) return;
    ptr[b++] =root->val;
    pre(root->left,ptr);
    pre(root->right,ptr);
 }
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* ptr = (int*)malloc(101*sizeof(int));
    b = 0;
    pre(root,ptr);
    *returnSize = b;
    return ptr;
}