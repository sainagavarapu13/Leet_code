class Solution {
public:
    int networkDelayTime(vector<vector<int>>& t, int n, int k) {
        vector<vector<pair<int,int>>>adj(n+1);
        for(auto& i:t){
            adj[i[0]].push_back({i[1],i[2]});
        }
        
        queue<int>q;
        q.push(k);
        vector<int>ans(n+1,-1);
        ans[k]=0;
       
        while(!q.empty()){
            int pre = q.front();
            q.pop();
           
            for(auto& i:adj[pre]){
                int first = i.first , second = i.second;
               if(ans[first] == -1 || ans[first] > ans[pre] + second){
    ans[first] = ans[pre] + second;
    q.push(first);
}
                
            }
           
        }
        int maxi = -1;
      
        for(int i=1;i<ans.size();i++){
            if(k==i) continue;
            if(ans[i]==-1) return -1;
            maxi = max(maxi,ans[i]);
        }
       
        return maxi;
    }
};