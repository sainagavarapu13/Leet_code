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
    bool dfs(TreeNode* root, int target, string &path) {
    if (!root) return false;
    if (root->val == target)
        return true;
    path.push_back('L');
    if (dfs(root->left, target, path))
        return true;
    path.pop_back();
    path.push_back('R');
    if (dfs(root->right, target, path))
        return true;
    path.pop_back();
    return false;
}
    TreeNode* lowestCommonAncestor(TreeNode* root, int p, int q) {
        if( root == NULL) return root;
        if( root->val ==p || root->val== q){
            return root;
        }
        TreeNode* low = lowestCommonAncestor(root->left , p, q);
        TreeNode* lef = lowestCommonAncestor(root->right, p ,q);
        if( low && lef ) return root;
        else if( low == NULL) return lef;
        else return low;
    }
    string getDirections(TreeNode* root, int s, int d) {
        TreeNode* lca = lowestCommonAncestor(root, s, d);
        string start_path;
        dfs(lca,s, start_path );
        string end_path ;
         dfs(lca, d, end_path);
        for( int i=0;i<start_path.size();i++){
            start_path[i] ='U';
        }
        return start_path+end_path;
    }
};