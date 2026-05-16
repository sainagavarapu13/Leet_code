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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1&&!root2) return NULL;;
        if(!root1) return root2;
        if(!root2) return root1;
        TreeNode* root = new TreeNode(root1->val+root2->val);
        TreeNode* ans=root;
        queue<TreeNode*>q1;
        queue<TreeNode*>q2;
        queue<TreeNode*> q3;
        q1.push(root1);
        q2.push(root2);
        q3.push(root);
        while(!q1.empty() && !q2.empty()){
            TreeNode* fir = q1.front();
            TreeNode* sec = q2.front();
            TreeNode* curr = q3.front();
            q1.pop();
            q2.pop();
            q3.pop();
            if(fir->left && sec->left){
                curr->left = new TreeNode(fir->left->val+sec->left->val);
                q1.push(fir->left);
                q2.push(sec->left);
                q3.push(curr->left);
            }
            else if(fir->left){
                curr->left = fir->left;
            }
            else if(sec->left){
              
                 curr->left = sec->left;
            }
             if(fir->right && sec->right) {

                curr->right = new TreeNode(
                    fir->right->val + sec->right->val
                );

                q1.push(fir->right);
                q2.push(sec->right);
                q3.push(curr->right);
            }
            else if(fir->right) {
                curr->right = fir->right;
            }
            else if(sec->right) {
                curr->right = sec->right;
            }
        }
         return root;
    }
};