/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int sum=0;
 void cnt(struct TreeNode* root, int low, int high){
    if(root==NULL) return;
    cnt(root->left,low,high);
    if((root->val)>=low&&(root->val)<=high) sum+=root->val;
    cnt(root->right,low,high);
 }
int rangeSumBST(struct TreeNode* root, int low, int high) {
    sum=0;
    cnt(root,low,high);
    return sum;
}