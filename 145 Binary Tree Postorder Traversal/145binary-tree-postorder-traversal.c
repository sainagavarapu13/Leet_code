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
 void post(struct TreeNode* root,int *ptr){
    if(root==NULL) return;
    post(root->left,ptr);
    post(root->right,ptr);
    ptr[b++] =root->val;
 }
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int* ptr = (int*)malloc(101*sizeof(int));
    b = 0;
    post(root,ptr);
    *returnSize = b;
    return ptr;
}