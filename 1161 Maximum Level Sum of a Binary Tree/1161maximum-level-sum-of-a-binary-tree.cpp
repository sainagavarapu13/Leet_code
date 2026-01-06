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
    int m = INT_MIN,z=1,b=0;
    void level(TreeNode *root){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int a = q.size();
            long long sum = 0;
            for(int i=0;i<a;i++){
                TreeNode* curr = q.front();
                q.pop();
                sum +=curr->val;
                //cout<<curr->val<<" ";
            if(curr->left!=nullptr) q.push(curr->left);
            if(curr->right!=nullptr) q.push(curr->right);
            }
            b++;
            if(sum>m){
                m = sum;
                z = b;
            }
        }
    }
    int maxLevelSum(TreeNode* root) {
        level(root);
        //cout<<m<<endl;
        return z;
    }
};