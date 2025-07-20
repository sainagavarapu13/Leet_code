/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 
    int sum=0;
 void pre( struct TreeNode* root, int low, int high){
    if( root == NULL) return ;
    if( root->val >=low && root->val <=high) sum+=root->val;
    pre(root->left , low, high);
    pre( root->right , low, high);
 }
int rangeSumBST(struct TreeNode* root, int low, int high) {
    sum=0;
    pre(root, low,high);
    return sum;
}