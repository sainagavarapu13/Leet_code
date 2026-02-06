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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        TreeNode* temp =root;
        queue<pair<TreeNode* , int>>q;
        q.push({temp,temp->val});
        while(!q.empty()){
            TreeNode *nn = q.front().first;
            int sum = q.front().second;
            q.pop();
            if(nn->left ==NULL &&nn->right==NULL){
                if(sum ==targetSum) return true;
            }
            if(nn->left) q.push({nn->left , sum+nn->left->val});
            if(nn->right) q.push({nn->right , sum+nn->right->val});
        }
        return false;
    }
};