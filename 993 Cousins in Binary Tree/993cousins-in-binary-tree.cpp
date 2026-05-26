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
    bool isCousins(TreeNode* root, int X, int Y) {
        int x_parent=-1,y_parent=-1,x_depth=-1,y_depth=-1;
        queue<tuple<TreeNode*,TreeNode*,int>>q;
        q.push({root,NULL,0});
        while(!q.empty()){
            auto [x,y,z] = q.front();
            q.pop();
            if(X==x->val){
                x_parent = y?y->val:-1;
                x_depth = z;
            }
            if(Y==x->val){
                 y_parent =  y?y->val:-1;
                y_depth = z;
            }
            if(x->left){
                q.push({x->left,x,z+1});
            }
            if(x->right){
                q.push({x->right,x,z+1});
            }
        }
        if(x_depth==y_depth&&x_parent!=y_parent) return true;
        return false;
    }
};