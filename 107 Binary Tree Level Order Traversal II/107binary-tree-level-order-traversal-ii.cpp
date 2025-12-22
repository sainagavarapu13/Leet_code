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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
          queue<TreeNode*>Q;
        vector<vector<int>>ans;
        if( root == NULL )return ans;
        Q.push( root);
        while( !Q.empty()){
            int len = Q.size();
            vector<int>curr;
            for( int i=0;i<len;i++){
                TreeNode* node = Q.front();
                Q.pop();
                curr.push_back(node->val);
                if( node->left != NULL){
                    Q.push( node->left);
                }
                if( node->right != NULL){
                    Q.push(node->right);
                }

            }
            ans.push_back(curr);
        }
        reverse( ans.begin(),ans.end());
        return ans;
    }
};