class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& a) {
        int n=a.size();
        queue<int>q;
        q.push(0);
        int cnt=0;
        vector<int>vis(n,0);
        vis[0]=1;
        while(!q.empty()){
            int x = q.front();
            q.pop();
            cnt++;
            for(auto& i:a[x]){
                if(vis[i]==0){
                    q.push(i);
                    vis[i]=1;
                }
                
            }
        }
        return cnt==n;
    }
};