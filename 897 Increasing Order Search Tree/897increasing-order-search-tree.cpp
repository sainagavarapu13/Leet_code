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
 TreeNode* Root;
    void fun(TreeNode* root){
        if(!root) return;
        fun(root->left);
        Root->right= new TreeNode(root->val);
        Root=Root->right;
        fun(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
       TreeNode* temp= new TreeNode();
      Root= temp;
       fun(root);
       return temp->right;
    }
};