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
        queue<TreeNode*>q;
        q.push(root);
        root->val =0;
        while( !q.empty()){
            int n = q.size();
            vector<TreeNode*>t;
            int sum=0;
            while( n--){
                TreeNode* node = q.front();
                t.push_back(node);
                q.pop();
                if(node->left!=NULL ){
                    q.push(node->left);
                    sum+=node->left->val;
                }
                if( node->right !=NULL){
                    q.push(node->right);
                    sum+=node->right->val;
                }
            }
            for( TreeNode* node:t){
                int y = sum;
                  if(node->left!=NULL ) y-=node->left->val;
                    if( node->right !=NULL){
                    y-=node->right->val;
                }if(node->left!=NULL ) node->left->val=y;
                    if( node->right !=NULL){
                    node->right->val=y;
                }

            }
        }
        return root;
        
    }
};