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

    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int cnt=0;
          vector<TreeNode*>v;
          int f;
        while( !q.empty()){
            if(!v.empty())
             f = v.size();
            int s = q.size();
            cnt++;
          
            for( int i =0;i<s;i++){
                TreeNode* node = q.front();
                q.pop();
               if(node->left!=NULL) q.push(node->left);
               if(node->right!=NULL) q.push(node->right);
              v.push_back(node);
            }
            if (cnt % 2 == 0) {
                int l = f;
                int r = v.size() - 1;

                while (l < r) {
                    swap(v[l]->val, v[r]->val);
                    l++;
                    r--;
                }
            }

        }
        return root;
    }
};