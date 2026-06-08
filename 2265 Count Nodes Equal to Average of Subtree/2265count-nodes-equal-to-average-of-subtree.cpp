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
    int ans=0;
    pair<int,int> fun(TreeNode* root ){
        if( root==NULL) return {0,0};
        auto [ s1,c1] = fun( root->left);
        auto [ s2,c2] = fun( root->right);
        int sum = s1+s2+root->val;
        int cnt = c1+c2+1;
        if( sum/cnt == root->val)  ans++;
        return {sum, cnt};
    }
    int averageOfSubtree(TreeNode* root) {
        fun( root);
        return ans;
    }
};