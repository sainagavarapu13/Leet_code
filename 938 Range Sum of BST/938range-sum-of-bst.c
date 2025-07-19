/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int b=0;
 void post(struct TreeNode* root,int low,int right){
    if(root==NULL) return;
    post(root->left,low,right);
    post(root->right,low,right);
    if(root->val >=low && root->val <=right) b= b+ root->val;
 }
int rangeSumBST(struct TreeNode* root, int low, int high) {
    b = 0;
    post(root,low,high);
    return b;
}