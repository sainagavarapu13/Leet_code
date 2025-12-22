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
    vector<double> averageOfLevels(TreeNode* root) {
         vector<double>ans;
        queue<TreeNode*>q;
        if(!root) return ans;
        q.push(root);
        while(!q.empty()){
            double len=q.size();
            double sum=0;
            for(int i=0;i<len;i++){
                TreeNode *t_val=q.front();
                sum+=t_val->val;
                if(t_val->left) q.push(t_val->left);
                if(t_val->right) q.push(t_val->right);
                q.pop();
            }
            ans.push_back(sum/len);
        }
        return ans;
    }
};