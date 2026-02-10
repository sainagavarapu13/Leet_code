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
void level(TreeNode* root,vector<vector<int>> &r){
        if(root==NULL) return;
        queue<TreeNode*> q;
        q.push(root);
        stack<vector<int>> s;
        while(!q.empty()){
            vector<int> v;
            int n = q.size();
            for(int i=0;i<n;i++){
                TreeNode* cur = q.front();
                v.push_back(cur->val);
                q.pop();
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
            s.push(v);
        }
        while(!s.empty()){
            r.push_back(s.top());
            s.pop();
        }
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        level(root,res);
        return res;
    }
};