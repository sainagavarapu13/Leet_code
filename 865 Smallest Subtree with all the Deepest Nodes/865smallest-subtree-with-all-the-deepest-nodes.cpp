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
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        vector<TreeNode*>vis;
        queue<pair<TreeNode* , TreeNode*>>q;
        q.push({root, NULL});
        map<TreeNode*, TreeNode*> m;
        while( !q.empty()){
           
            vis.clear();
            int n = q.size();
            for( int i=0;i<n;i++){
                 auto [x,y] = q.front();
            q.pop();
            m[x]=y;
            vis.push_back(x);
            if( x->left){
                q.push({x->left, x});
            }
            if( x->right) q.push({x->right, x});
            }
        }
        if( vis.size()==1) return vis[0];
        while( vis.size()>1){
            set<TreeNode*>s;
            for( auto i : vis){
                s.insert(m[i]);
            }
            vis.assign(s.begin(), s.end());
        }
        return vis[0];
    }
};