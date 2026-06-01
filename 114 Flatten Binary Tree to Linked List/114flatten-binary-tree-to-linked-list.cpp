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
TreeNode* temp,*start;
    void pre(TreeNode* &root){
        if(!root) return;
        temp->right = new TreeNode(root->val);
        temp=temp->right;
        pre(root->left);
        pre(root->right);
    }
    void flatten(TreeNode* root) {
        temp=NULL;
        temp=new TreeNode(0);
        start=temp;
        pre(root);
        start=start->right;
        while(start){
            root->val=start->val;
            root->left=NULL;
            if(start->right){
                root->right=new TreeNode(0);
            }
            else{
                root->right=NULL;
            }
            start=start->right;
            root=root->right;
        }

    }
};