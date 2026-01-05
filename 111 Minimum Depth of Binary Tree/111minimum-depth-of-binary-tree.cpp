/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int min = INT_MAX;
    void len(TreeNode* root,int a){
        int b = a,c=a;
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            if(min>a){
                min =a;
            }
            //cout<<root->val<<" "<<min<<endl;
            return;
        }
            len(root->left,++b);
            len(root->right,++c);
    }
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int a = 1;
        if(root->left==NULL && root->right==NULL) return 1;
        if(root->left!=NULL)len(root->left,2);
        if(root->right!=NULL)len(root->right,2);
        return min;
    }
};