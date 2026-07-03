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
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        queue<pair<TreeNode*, TreeNode*>>a;
        a.push({root, NULL});
        vector<TreeNode*>last;
        map<TreeNode*, TreeNode*>p;

        while( !a.empty()){
            int n = a.size();
            last.clear();
            for( int i=0;i<n;i++){
                 auto [x,y]=a.front();
                 a.pop();
                 last.push_back(x);
                 p[x]=y;
                 if( x->left) a.push({x->left, x});
                 if( x->right) a.push({x->right, x});
            }
        }
        while( last.size()>1){
            unordered_set<TreeNode*>s;
            for( auto x : last){
                s.insert(p[x]);
            }
            last.assign(s.begin(), s.end());
        }
        return last[0];
    }
};