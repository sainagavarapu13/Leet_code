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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
       map<int,map<int,multiset<int>>>m;
        if(!root) return {{}};
        queue<tuple<TreeNode*,int,int>>q;
        q.push({root,0,0});
        while(!q.empty()){
            auto [pre,x,y] = q.front();
            q.pop();
            m[y][x].insert(pre->val);
                    if(pre->left){
                q.push({pre->left,x+1,y-1});
            }
            if(pre->right){
                q.push({pre->right,x+1,y+1});
            }
        }
        vector<vector<int>>ans;
        for(auto& [n,c]:m){
          vector<int>temp;
          for(auto& [i,j]:c){
            for(int val : j){
             temp.push_back(val);
              }
           
          }
          ans.push_back(temp);
        }
        return ans;
    }
};