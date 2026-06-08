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
    TreeNode* dsf(TreeNode* root, int limit , int sum ){
        if( root == NULL) return nullptr;
        sum+=root->val;
        if( root->left == NULL && root->right == NULL){
            return (sum<limit)? nullptr: root;
            }
        root->left = dsf( root->left, limit, sum);
        root->right = dsf( root->right , limit, sum);
           if( root->left == NULL && root->right == NULL){
            return nullptr;
    }
    return root;

    }
    TreeNode* sufficientSubset(TreeNode* root, int limit) {
        return dsf( root, limit, 0);
    }
};