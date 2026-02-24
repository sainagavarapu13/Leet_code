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
string ans;
vector<string>all;
    void fun(TreeNode* root){
        if(!root) { return; }
       ans+=(root->val)+'0';
         if (!root->left && !root->right) {
            all.push_back(ans);
        }
        fun(root->left);
        fun(root->right);
        ans.pop_back();
    }
    int num(string a){
        int idx=1,sum=0;
        for(int i=a.size()-1;i>=0;i--){
            sum+=(a[i]-'0')*idx;
            idx*=2;
        }
        return sum;
    }
    int sumRootToLeaf(TreeNode* root) {
        ans="";
        all.clear();
        fun(root);
        int sum=0;
        for(auto& i: all){
            sum+=num(i);
        }
        return sum;
    }
};