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
    TreeNode* inser( TreeNode * root,int val){
        if( root== NULL) return new TreeNode(val);
        else if( root->val<val){
            root->right = inser(root->right,val);
        }else if( root->val>val){
            root->left = inser(root->left,val);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root=NULL;
        for( int i : preorder){
            root = inser(root,i);
        }
        return root;
    }
};