class Solution {
public:
    TreeNode* createBinaryTree(
        vector<vector<int>>& a) {
        unordered_map<int,TreeNode*> mp;
        unordered_set<int> child;
        for(auto &i:a){
            int par = i[0];
            int chi = i[1];
            int lef = i[2];
            if(mp.find(par)==mp.end()){
                mp[par] =
                new TreeNode(par);
            }
            if(mp.find(chi)==mp.end()){
                mp[chi] =
                new TreeNode(chi);
            }
            if(lef)
                mp[par]->left = mp[chi];
            else
                mp[par]->right = mp[chi];

            child.insert(chi);
        }

        for(auto &[val,node]:mp){
            if(!child.count(val))
                return node;
        }
        return NULL;
    }
};