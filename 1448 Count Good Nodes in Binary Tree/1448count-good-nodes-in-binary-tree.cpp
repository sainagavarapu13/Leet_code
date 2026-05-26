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
    int goodNodes(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        q.push({root,root->val});
        int cnt=0;
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            if(x->val>=y){
                cnt++;
            }
            if(x->left){
                q.push({x->left,max(x->val,y)});
            }
            if(x->right){
                q.push({x->right,max(x->val,y)});
            }
        }
        return cnt;
    }
};