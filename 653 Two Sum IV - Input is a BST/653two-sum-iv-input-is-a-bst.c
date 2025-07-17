/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int a[10001]={0};
int i;
 void inorder(struct TreeNode* root){
    if(root!=NULL) 
   { inorder(root->left);
    a[i++]=root->val;
    inorder(root->right);
   }
 }
bool findTarget(struct TreeNode* root, int k) {
   i=0;
    inorder(root);
    int left=0,right=i-1;
    while(left<right){
        if(a[left]+a[right]==k){
            return 1;
            
        }
        else if(k<a[left]+a[right]){
            right--;
        }
        else left++;
    }
    return 0;
}