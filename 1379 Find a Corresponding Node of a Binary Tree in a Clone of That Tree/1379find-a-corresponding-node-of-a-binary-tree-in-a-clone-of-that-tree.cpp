/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
TreeNode* ans=NULL;
    void search( TreeNode* original,TreeNode* cloned, TreeNode* target){
        if(!original) return ;
        search(original->left,cloned->left,target);
         if(original==target){
            ans= cloned;
        }
        search(original->right,cloned->right,target);
       
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        ans=NULL;
         search(original,cloned,target);
         return ans;
    }
};