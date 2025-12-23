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
    struct info{
        int h;
        int d;
    };
    info dep(TreeNode* root){
        if( root == NULL) return {0,0};
        info lh = dep( root->left);
        info rh = dep( root->right);
        info cur;
        cur.h = max(lh.h,rh.h)+1;
        cur.d =max(lh.h+rh.h,max(lh.d,rh.d));
        return cur;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        info val = dep(root);
        return val.d; 
    }
};