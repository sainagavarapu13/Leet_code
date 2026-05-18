class Solution {
public:
    int minJumps(vector<int>& a) {
        map<int,vector<int>>m;
        for(int i=0;i<a.size();i++){
            m[a[i]].push_back(i);
        }
        queue<pair<int,int>>q;
        q.push({0,0});
        int n=a.size()-1;
        vector<int>visited(n+1,0);
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            if(visited[x]==1) continue;
            visited[x]=1;
            if(x==n){
               return y;
            }
            if(x+1<=n&&visited[x+1]==0){
                q.push({x+1,y+1});
            }
            if(x-1>=0&&visited[x-1]==0){
                q.push({x-1,y+1});
            }
            for(auto& i:m[a[x]]){
                if(visited[i]==0)
                q.push({i,y+1});
            }
             m[a[x]].clear();
        }
        return -1;
    }
};