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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*>q;
        if(!root) return ans;
        q.push(root);
        while(!q.empty()){
            vector<int>temp;
            int len=q.size();
            for(int i=0;i<len;i++){
                TreeNode* nn=q.front();
                temp.push_back(nn->val);
                if(nn->left) q.push(nn->left);
                if(nn->right) q.push(nn->right);
                q.pop();
            }
            ans.push_back(temp);
        }
        for(int i=0;i<ans.size();i++){
            if(i%2==1){
                reverse(ans[i].begin(),ans[i].end());
            }

        }
        return ans;
    }
};