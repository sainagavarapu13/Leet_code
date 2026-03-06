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
  
    int max_idx(vector<int>& a, int start,int end){
        int idx,maxi=-1;
        for(int i=start;i<=end;i++){
            if(maxi<a[i]){
                maxi=a[i];
                idx=i;
            }
        }
        return idx;
    }
    TreeNode* insert(vector<int>& a , int start,int end){
        if(start>end) return NULL;
        int idx = max_idx(a,start,end);
         TreeNode* node = new TreeNode(a[idx]);
         node->left = insert(a, start, idx - 1);
        node->right = insert(a, idx + 1, end);
        return node;
        
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& a) {
        return insert(a,0,a.size()-1);
    }
};