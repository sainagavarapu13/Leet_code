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
    int res = 0;
    int check(TreeNode* root){
        if(root==NULL) return 0;
        long long ans1 =  max(root->val,check(root->left));
        long long ans2 =  max(root->val,check(root->right));
        long long a = max(ans1,ans2);
        if(root->val == a) res++;
        return a;
    }
public:
    int countDominantNodes(TreeNode* root) {
        int b = check(root);
        return res;
    }
};