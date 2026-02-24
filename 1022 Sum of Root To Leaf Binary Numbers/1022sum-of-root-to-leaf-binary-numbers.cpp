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
int ans=0;
vector<string>t;
    void fun(TreeNode* root,string a){
        if( root ==  NULL) return;
      if( root->left == NULL && root->right==NULL){
            a+=(root->val+'0');
             t.push_back( a);
             a.pop_back();
            return ;
        }
        a.push_back(root->val+'0');
        fun( root->left,a);
         a.pop_back();
      a.push_back(root->val+'0');
        fun( root->right, a);
          a.pop_back();
    }
    int sumRootToLeaf(TreeNode* root) {
        string a;
        fun( root,a);
        int sum=0;
        for( string s :t){
            int val=0;
            for( int i=0;i<s.size();i++){
                if( s[i]=='1'){
                    val+=(1<<((int)s.size()-i-1));
                }
            }
            cout << s << " "<< val <<endl;
            sum+=val;
        }
        return sum;
    }
};