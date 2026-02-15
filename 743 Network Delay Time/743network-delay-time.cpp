class Solution {
public:
    int networkDelayTime(vector<vector<int>>& a, int n, int k) {
       vector<vector<pair<int, int>>>aj(n+1);
        for( auto i : a){
            aj[i[0]].push_back({i[1],i[2]});
        }
        queue<int>q;
        q.push(k);
        vector<int>ans(n+1,-1);
        ans[k]=0;
        while(!q.empty()){
            int bef = q.front();
            q.pop();
            for( auto i : aj[bef]){
                int f = i.first,s = i.second;
                if( ans[f]==-1 || ans[f]>ans[bef]+s){
                    ans[f] = ans[bef]+s;
                
                q.push(f);}
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