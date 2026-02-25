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
    int sumEvenGrandparent(TreeNode* root) {
        if(!root) return 0;
        queue<tuple<TreeNode*,TreeNode* ,TreeNode*>>q;
        q.push({root,NULL,NULL});
        int cnt=0,sum=0;
        while(!q.empty()){
            int len = q.size();
           
            for(int i=0;i<len;i++){
                auto [x,y,z] = q.front();
                q.pop();
               if(z!=NULL&& (z->val)%2==0){
                sum+=x->val;
               }
                if(x->left) {
                    
                    q.push({x->left,x,y});
                    
                }
                if(x->right){
                    q.push({x->right,x,y});
                }
            }
             cnt++;
        }
        return sum;
    }
};