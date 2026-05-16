class Solution {
public:
    int maxStarSum(vector<int>& vals, vector<vector<int>>& e, int k) {
        vector<vector<int>>adj(vals.size());
        for(auto&i:e){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        // for(int i=0;i<adj.size();i++){
        //     cout<<i<<"->";
        //     for(int j=0;j<adj[i].size();j++){
        //         cout<<adj[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        priority_queue<int,vector<int> , greater<int>>pq;
        int ans=INT_MIN;
        for(int i =0;i<vals.size();i++){
            for(auto& j:adj[i]){
               if(vals[j]>0) pq.push(vals[j]);
                if(pq.size()>k){

                    pq.pop();
                }
            }
            int sum=vals[i];
            while(!pq.empty()){
                sum+=pq.top();
                pq.pop();
            }
            cout<<sum<<" ";
            ans=max(ans,sum);
        }
        return ans;
    }
};