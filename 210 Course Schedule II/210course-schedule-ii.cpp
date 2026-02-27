class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& a) {
         vector<int>need(n,0);
        vector<vector<int>>adj(n);
        for(auto& i:a){
            need[i[0]]++;
            adj[i[1]].push_back(i[0]);
        }
        queue<int>q;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(need[i]==0){
                q.push(i);
            }
            }
        
        if(q.empty()) return {};
        vector<int>ans;
        while(!q.empty()){
            int pre=q.front();
            q.pop();
             cnt++;
             ans.push_back(pre);
            for(auto& i:adj[pre]){
                   need[i]--;
                   if(need[i]==0)  q.push(i);
            }
            if(cnt==n) return ans;
        }
        return {};
    }
};