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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        queue<TreeNode*>q;
        q.push(root);
        int cnt = 0;
        while(!q.empty()){
            int len = q.size();
            long long sum =0;
             cnt++;
            for(int i=0;i<len;i++){
                TreeNode* nn = q.front();
                sum+=nn->val;
                q.pop();
                if(nn->left) q.push(nn->left);
                if(nn->right) q.push(nn->right);
            }
           
            pq.push(sum);
            if(pq.size()>k) pq.pop();
        }
         if(cnt<k) return -1;
        return pq.top();
    }
};