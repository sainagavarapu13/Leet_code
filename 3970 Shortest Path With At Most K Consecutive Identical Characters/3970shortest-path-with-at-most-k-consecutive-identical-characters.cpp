class Solution {
public:
    int shortestPath(int n, vector<vector<int>>& a, string st, int k) {
        vector<vector<pair<int,int>>>adj(n);
        for(auto& i:a){
            adj[i[0]].push_back({i[1],i[2]});
        }
        vector<vector<int>>dist(n,vector<int>(k+1,INT_MAX));
        priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<>>que;
        dist[0][1] = 0;
        que.push({0,0,1});
        int ans=INT_MAX;
      
        while(!que.empty()){
            auto [q,p,cnt] = que.top();
            que.pop();
            char r = st[p];
            if(q>dist[p][cnt]) continue;
           
            if(p==n-1)
            return q;
           for(auto &i : adj[p]){

    char R = r;
    int s = cnt;

    if(R == st[i.first]){
        if(s + 1 > k) continue;
        s++;
    }
    else{
        s = 1;
        R = st[i.first];
    }

    if(q + i.second < dist[i.first][s]){
        dist[i.first][s] = q + i.second;
        que.push({q + i.second, i.first,  s});
    }
}
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};