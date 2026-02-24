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
    int res = 0;
    void dfs(TreeNode* r,string s){
        s += '0'+r->val;
        if(r->left==nullptr && r->right==nullptr){
            int n = stoi(s,nullptr,2);
            // cout<<n<<" "<<s<<endl;
            res +=n;
            return;
        }
        if(r->left)dfs(r->left,s);
        if(r->right)dfs(r->right,s);
        s.pop_back();
    }
    int sumRootToLeaf(TreeNode* root) {
        string s;
        dfs(root,s);
        return res;
    }
};