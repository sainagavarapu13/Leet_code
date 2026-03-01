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
    bool check(vector<int>&a){
        int cnt=0;
        for(auto& c:a){
            if(c%2==1){
                cnt++;
            }
        }
        if(cnt>1) return false;
        return true;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        int cnt=0;
        queue<pair<TreeNode* , vector<int> >>q;
         vector<int> start(10, 0);
        start[root->val]++;

        q.push({root, start});
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            if(x->left == NULL && x->right == NULL){
                if(check(y)){
                    cnt++;
                }
            }
            if(x->left){
                vector<int>t=y;
                t[x->left->val]++;
                q.push({x->left ,t});
            }
             if(x->right){
                vector<int>t=y;
                t[x->right->val]++;
                q.push({x->right , t});
            }
        }
        return cnt;
    }
};