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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        queue<TreeNode*>Q;
        if( root == NULL) return ans;
        Q.push( root);
         while( !Q.empty()){
            int len = Q.size();
            double curr=0;
            for( int i=0;i<len;i++){
                TreeNode* node = Q.front();
                Q.pop();
                curr+=node->val;
                if( node->left != NULL){
                    Q.push( node->left);
                }
                if( node->right != NULL){
                    Q.push(node->right);
                }

            }
            ans.push_back(curr/len);
        }
        return ans;
        
    }
};