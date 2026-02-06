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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*>q;
        if(!root) return NULL;
        vector<vector<int>>a;
        q.push(root);
        while(!q.empty()){
            vector<int>temp;
            int len=q.size();
            for(int i=0;i<len;i++){
                TreeNode * nn = q.front();
                temp.push_back(nn->val);
                if(nn->left) q.push(nn->left);
                if(nn->right) q.push(nn->right);
                q.pop();
            }
            a.push_back(temp);
        }
        int sum = 0;
        int m =a[a.size()-1].size();
        for(int i =0;i<m;i++){
            sum+=a[a.size()-1][i];
        }
        return sum;
    }
};