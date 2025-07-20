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
 void postorder(struct TreeNode* root){
    if( root==NULL) return ;
        postorder(root->left);
        postorder(root->right);
       a[i++]=root->val;
     }
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    i=0;
    postorder(root);
    * returnSize =i;
    return a;
    
}