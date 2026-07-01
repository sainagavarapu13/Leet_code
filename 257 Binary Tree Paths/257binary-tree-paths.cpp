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
vector<string>ans;
    void check(TreeNode* root,string temp){
        if(root==NULL) return;
        if(root->left==NULL&&root->right==NULL){
           
            ans.push_back(temp+to_string(root->val));
            return;
        }
        check(root->left,temp+to_string(root->val)+"->");
        check(root->right,temp+to_string(root->val)+"->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        ans.clear();
        check(root,"");
        return ans;
    }
};