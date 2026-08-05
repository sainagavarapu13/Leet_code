class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& a) {
        vector<vector<int>>adj(n);
        for(auto & i:a){
            adj[i[0]].push_back(i[1]);
        }
        vector<bool>is_sus(n,false);
        queue<int>q;
        q.push(k);
        while(!q.empty()){
            int x = q.front();
            is_sus[x]=1;
            q.pop();
            for(auto& i:adj[x]){
                if(is_sus[i]==0)
                q.push(i);
            }
        }
        vector<int>ans(n);
        iota(ans.begin(),ans.end(),0);
       for(auto& i:a){
        if(is_sus[i[0]]==0&&is_sus[i[1]]) return ans;
       }
        ans.clear();
        for(int i=0;i<n;i++){
            if(is_sus[i]==0) ans.push_back(i);
        }
        return ans;
    }
};