/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 struct TreeNode *search(struct TreeNode* root,int val){
    if(root==NULL) return root;
    if(root->val==val) return root;
    else if(val>root->val){
       return root=search(root->right,val);
    }
    else{
        return root=search(root->left,val);
    }
    root=NULL;
 }
struct TreeNode* searchBST(struct TreeNode* root, int val) {
   root=search(root,val);
    return root;
}