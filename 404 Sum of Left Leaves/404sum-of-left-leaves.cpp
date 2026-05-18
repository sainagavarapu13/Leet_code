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
    int sumOfLeftLeaves(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        q.push({root,-1});
        int sum=0;
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            if(y==0&&!(x->left||x->right)){
                sum+=x->val;
            }
            if(x->left){
                q.push({x->left,0});
            }
            if(x->right){
                q.push({x->right,1});
            }
        }
        return sum;
    }
};