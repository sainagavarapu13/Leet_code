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
    TreeNode* insert(int a,TreeNode * root){
        if(root==NULL) return new TreeNode(a);
        else if(root->val>a){
            root->left=insert(a,root->left);
        }
        else root->right=insert(a,root->right);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& a) {
        TreeNode * root = NULL;
        for(int i=0;i<a.size();i++){
            root=insert(a[i],root);
        }
        return root;
    }
};