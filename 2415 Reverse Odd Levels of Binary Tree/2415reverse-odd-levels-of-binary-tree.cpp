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
    TreeNode* insert(vector<int>&a , int i){
        if (i >= a.size()) return NULL;
         TreeNode* root = new TreeNode(a[i]);
       root->left = insert(a,2*i+1);
       root->right = insert(a,2*i+2);
       return root;
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*>q;
        if(!root) return NULL;
        vector<vector<int>>a;
        q.push(root);
        while(!q.empty()){
            vector<int>temp;
            int len=q.size();
            for(int i=0;i<len;i++){
                TreeNode * nn = q.front();
                temp.push_back(nn->val);
                if(nn->left) q.push(nn->left);
                if(nn->right) q.push(nn->right);
                q.pop();
            }
            a.push_back(temp);
        }
        TreeNode *Root = NULL;
        for(int i=1;i<a.size();i+=2){
            reverse(a[i].begin(),a[i].end());
        }
        vector<int>vec;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[i].size();j++){
               vec.push_back(a[i][j]);
               
            }
        }
       
        Root = insert(vec,0);
        return Root;
    }
};