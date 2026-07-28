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
vector<int>ele;
    void add(TreeNode* root){
        if(!root) return;
        add(root->left);
        ele.push_back(root->val);
        add(root->right);

    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        ele.clear();
        add(root1);
        add(root2);
        sort(ele.begin(),ele.end());
        return ele;
    }
};