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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>a;
        queue<TreeNode*>q;
        if( root==NULL) return {};
        q.push(root);
        while( !q.empty()){
            int n = q.size();
            TreeNode* las;
            while( n--){
                las = q.front();
                q.pop();
                if( las->left != NULL) q.push(las->left);
                if( las->right !=NULL) q.push( las->right);
            }
            a.push_back(las->val);
        }
        return a;
    }
};