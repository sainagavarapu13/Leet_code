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
    bool valid(vector<int>&a , int k){
        if(k%2==0){
            int maxi=a[0];
            if(a[0]%2==0) return false;
            for(int i=1;i<a.size();i++){
                if(a[i]%2==0) return 0;
                if(a[i]<=maxi) return 0;
                maxi=max(maxi,a[i]);
            }
        }
        else if(k%2==1){
            int maxi=a[0];
            if(a[0]%2==1) return false;
            for(int i=1;i<a.size();i++){
                if(a[i]%2==1) return 0;
                if(a[i]>=maxi) return 0;
                maxi=min(maxi,a[i]);
            }
        }
        return true;
    }
    bool isEvenOddTree(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        int cnt=0;
        while(!q.empty()){
            int len=q.size();
            vector<int>temp;
            for(int i=0;i<len;i++){
                TreeNode *t_val=q.front();
                temp.push_back(t_val->val);
                if(t_val->left) q.push(t_val->left);
                if(t_val->right) q.push(t_val->right);
                q.pop();
            }
           if(!valid(temp,cnt)) return false;
           cnt++;
        }
        return true;
    }
};