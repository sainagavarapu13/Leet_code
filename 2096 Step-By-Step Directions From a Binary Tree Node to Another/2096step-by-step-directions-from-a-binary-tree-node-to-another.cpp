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
    TreeNode* lac(TreeNode* root, int p, int q){
        if(!root) return nullptr;
        if(root->val==p||root->val==q) return root;
        TreeNode* left = lac(root->left,p,q);
        TreeNode* right = lac(root->right,p,q);
        if(left&&right){
            return root;
        }
       return left?left:right;
    }
    string dfs(TreeNode* root,int p,string &temp){
        if(!root) return "";
        if(root->val==p){
            return temp;
        }
        
            temp.push_back('L');
            string left = dfs(root->left, p, temp);
            temp.pop_back();

            if(!left.empty())
                return left;

            temp.push_back('R');
            string right = dfs(root->right, p, temp);
            temp.pop_back();

            return right;
    }
    string getDirections(TreeNode* root, int p, int q) {
        TreeNode* l = lac(root,p,q);
        string temp;
        string one = dfs(l,p,temp);
        temp.clear();
        string two = dfs(l,q,temp);
       
        for(auto& i:one) {
            i='U';
        }
        return one+two;
    }
};