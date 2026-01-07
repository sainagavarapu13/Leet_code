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
    int mod = 1e9+7;
    long long maxi = 0;
    void inorder(TreeNode* root,long long &sum){
        if(root==NULL) return;
        inorder(root->left,sum);
        sum+=root->val;
        inorder(root->right,sum);
    }
    long long pro(TreeNode* root,int sum){
        if(root==NULL) return 0;
        long long l = pro(root->left,sum);
        long long r = pro(root->right,sum);
        long long sub = root->val+l+r;
        maxi = max(maxi,sub*(sum-sub));
        return root->val+l+r;
    }
    int maxProduct(TreeNode* root) {
        long long sum = 0;
        int sub = 0;
        inorder(root,sum);
        pro(root,sum);
        return maxi%mod;
    }
};