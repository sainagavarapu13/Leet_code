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
        if(!root) return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<int>ans;
        while(!q.empty()){
            int len=q.size();
            for(int i=0;i<len;i++){
                TreeNode* pre =  q.front();
                q.pop();
                if(i==len-1){
                    ans.push_back(pre->val);
                }
                if(pre->left) q.push(pre->left);
                if(pre->right) q.push(pre->right);
            }
        }
        return ans;
    }
};