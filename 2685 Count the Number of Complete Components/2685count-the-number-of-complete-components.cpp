class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& e) {
        vector<vector<int>>g(n);
        for( int i=0;i<e.size();i++)
        {
            g[e[i][0]].push_back(e[i][1]);
            g[e[i][1]].push_back(e[i][0]);
        }
        int ans=0;
        vector<int>v(n, 0);
        for( int i=0;i<n;i++){
            if( v[i]) continue;
            queue<int>q;
            q.push(i);
            v[i]=1;
            int ed = 0;
            int ve =0;
            while( !q.empty()){
                int k = q.front();
                q.pop();
                 ed+=g[k].size();
                    ve++;
                for( auto j : g[k]){
                   if(!v[j]){
                    q.push(j);
                    v[j]=1;}

                }
            }
            ed/=2;
            if( ed == ve*(ve-1)/2){
                ans++;
            }
        }
        return ans;
    }
};