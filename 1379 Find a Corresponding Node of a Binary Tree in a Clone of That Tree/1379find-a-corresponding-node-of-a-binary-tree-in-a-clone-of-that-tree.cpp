/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* root, TreeNode* root1, TreeNode* t) {
        queue<TreeNode*> a, b;
        a.push(root);
        b.push(root1);
        while (!a.empty()) {
            int n = a.size();
            for (int i = 0; i < n; i++) {
                TreeNode* x = a.front();
                TreeNode* y = b.front();
                a.pop();
                b.pop();
                if (x == t)
                    return y;
                if (x->left) {
                    a.push(x->left);
                    b.push(y->left);
                }
                if (x->right) {
                    a.push(x->right);
                    b.push(y->right);
                }
            }
        }
        return NULL;
    }
};