class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n == 1) return {0};
        vector<vector<int>> adj(n);
        vector<int>degree(n,0);
        vector<int>res;
        for(auto& e:edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
            degree[e[0]]++;
            degree[e[1]]++;
        }
        queue<int>q;
        for(int i=0;i<degree.size();i++){
            if(degree[i]==1){
                q.push(i);
            }
        }
        int rem=n;
        while(rem>2){
            
            rem-=q.size();
            int sz=q.size();
            while(sz--){
                int leaf = q.front();
            q.pop();
            for(auto& i:adj[leaf]){
                degree[i]--;
                if(degree[i]==1){
                    q.push(i);
                }
            }
            }
        }
        while(!q.empty()){
            res.push_back(q.front());
            q.pop();
        }
        return res;
    }
};