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
    int findBottomLeftValue(TreeNode* root) {
         vector<vector<int>>ans;
        queue<TreeNode*>q;
       
        q.push(root);
        while(!q.empty()){
            int len=q.size();
            vector<int>temp;
            for(int i=0;i<len;i++){
                TreeNode *t_val=q.front();
                temp.push_back(t_val->val);
                if(t_val->left) q.push(t_val->left);
                if(t_val->right) q.push(t_val->right);
                q.pop();
            }
            ans.push_back(temp);
        }
        int n=ans.size();
        return ans[n-1][0];
    }
};