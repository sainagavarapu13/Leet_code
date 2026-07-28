/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* check(TreeNode* root, TreeNode* p, TreeNode* q){
        if(p->val<=root->val&&root->val<=q->val) return root;
        else if(root->val>p->val){
           return check(root->left,p,q);
        }
        else return check(root->right,p,q);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p->val<q->val){
            return check(root,p,q);
        }
    
            return check(root,q,p);
        
    }
};