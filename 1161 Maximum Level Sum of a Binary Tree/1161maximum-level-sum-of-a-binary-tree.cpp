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
    int maxLevelSum(TreeNode* root) {
        int m=INT_MIN;
       queue<TreeNode*>q;
       q.push(root);
       int  ind;
       int  cnt=0;
       while(!q.empty()){
        int len = q.size();
        int  sum=0;
        cnt++;
        for( int i=0;i<len;i++){
            TreeNode* node = q.front();
            q.pop();
            sum+=node->val;
            if( node->left) q.push(node->left);
            if( node->right) q.push(node->right);
        }
        if( sum >m){
            m = sum;
            ind = cnt;
        }
        
       }
       return ind;
       
    }
};