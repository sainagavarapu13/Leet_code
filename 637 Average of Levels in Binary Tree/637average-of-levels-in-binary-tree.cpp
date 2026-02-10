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
    void level(TreeNode* root,vector<double> &v){
        if(!root) return;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            long long avg= 0;
            for(int i=0;i<n;i++){
                TreeNode* cur  = q.front();
                q.pop();
                avg += cur->val;
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
            double b = (avg*1.0)/(n*1.0);
            v.push_back(b);
        }
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        level(root,res);
        return res;
    }
};