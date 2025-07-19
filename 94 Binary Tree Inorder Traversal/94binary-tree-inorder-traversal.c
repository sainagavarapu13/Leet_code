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
 int size = 0;
 void inorder(struct TreeNode* root,int *ptr){
    if(root == NULL) return;
    inorder(root->left,ptr);
    ptr[size++] = root->val;
    inorder(root->right,ptr);
 }
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int *ptr = (int*)malloc(100*sizeof(int));
    size = 0;
    inorder(root,ptr);
    *returnSize = size;
    return ptr;
}