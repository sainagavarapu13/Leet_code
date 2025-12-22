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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if( root == NULL) return ans;
        int k=0;
    
        queue<TreeNode*>Q;
            Q.push(root);
        while( !Q.empty()){
            int len = Q.size();
            vector<int>current;
            for( int i=0;i<len;i++){
                TreeNode* node = Q.front();
                Q.pop();
                current.push_back(node->val);
                if( node->left != NULL) Q.push(node->left);
                if( node->right!=NULL) Q.push(node->right);
            }
            if( k%2!=0){
                reverse(current.begin(),current.end());
            }
            ans.push_back(current);
            k++;
            
            
        }
        return ans;
    }
};