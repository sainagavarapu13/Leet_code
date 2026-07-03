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
    int sumEvenGrandparent(TreeNode* root) {
        queue<tuple<TreeNode*, TreeNode*,TreeNode*>>q;
        q.push({root,NULL, NULL});
        int ans=0;
        while( !q.empty()){
            int n = q.size();
            for(int i=0;i<n;i++){
                auto [c , p , g] = q.front();
                q.pop();
                if( g !=NULL && g->val%2==0){
                    ans+=c->val;
                }
                if( c->left) q.push({c->left, c, p});
                if( c->right) q.push({c->right, c, p});
            }
        }
        return ans;
    }
};