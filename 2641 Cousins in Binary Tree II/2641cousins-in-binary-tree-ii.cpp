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
    TreeNode* replaceValueInTree(TreeNode* root) {
        root->val=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int len = q.size();
            int sum=0;
            vector<TreeNode*>temp;
            for(int i=0;i<len;i++){
                 auto node = q.front();
            q.pop();
             temp.push_back(node);
                if(node->left){
                    q.push(node->left);
                   
                    sum+=node->left->val;
                }
                if(node->right){
                    q.push(node->right);
                   
                    sum+=node->right->val;
                }
            }
            for(auto& i:temp){
                int t=sum;
                if(i->left){
                    t-=i->left->val;
                }
                if(i->right){
                    t-=i->right->val;
                }
                if(i->left){
                    i->left->val = t;
                }
                if(i->right){
                    i->right->val = t;
                }
            }
        }
        return root;
    }
};