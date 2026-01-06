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
    int maxLevelSum(TreeNode* root) {
        int idx = 0;
        long long sum = 0,cnt=0,m=LLONG_MIN;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            sum = 0;
            cnt++;
            int len = q.size();
            for(int i=0;i<len;i++){
                TreeNode* nn = q.front();
                sum+=nn->val;
                q.pop();
                if(nn->left) q.push(nn->left);
                if(nn->right) q.push(nn->right);
            }
            if(sum>m){
                m=sum;
                idx = cnt;
            }
        }
        return idx;
    }
};