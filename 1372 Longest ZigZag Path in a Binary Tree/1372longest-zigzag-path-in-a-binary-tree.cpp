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
    void dept(TreeNode* root , int left , int cnt){
        if(root== NULL) return;
        ans = max( ans, cnt);
        if( left){ dept(root->right,0,cnt+1);
                dept(root->left,1,1);}
    else {dept(root->left ,1,cnt+1);
         dept(root->right,0,1);
    }
        
    }
    int longestZigZag(TreeNode* root) {
      dept(root->left , 1 ,1);
        dept(root->right,0,1);
        return ans;
    }
};