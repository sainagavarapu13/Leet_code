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
    void preorder(TreeNode* r,vector<int> &a){
        if(r!=NULL){
            a.push_back(r->val);
        }
        else{
            return;
        }
        if(r->left!=NULL) preorder(r->left,a);
        if(r->right!=NULL) preorder(r->right,a);
    }
    void flatten(TreeNode* root) {
        vector<int> v;
        preorder(root,v);
        if(v.size()==0) return;
        root->left = nullptr;
        TreeNode* t = root;
        TreeNode* pr = nullptr;
        for(int i=0;i<v.size();i++){
            // cout<<v[i]<<" ";
            if(t!=NULL){
                t->val = v[i];
                t->left = nullptr;
                pr = t;
            }
            else{
                TreeNode* p = new TreeNode(v[i]);
                if(p!=NULL)pr->right = p;
                pr = p;
                t = pr;
            }
            t = t->right;
        }
    }
};