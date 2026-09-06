class Solution {
public:
    int minCost(vector<vector<int>>& a, int k) {
        int n=a.size();
        int m = a[0].size();
        vector<vector<vector<vector<long long>>>>dp(n, vector<vector<vector<long long>>>(m,vector<vector<long long>>(k+1 , vector<long long>(5, INT_MAX))));
        using T = tuple<long long, int, int, int , int>;
        
        priority_queue<T, vector<T>, greater<T>>p;
        int dr[]={-1, 1, 0, 0};
        int dc[] = {0,0,-1,1};
        
    dp[0][0][0][4] = a[0][0];
        p.push({a[0][0], 0, 0, 4, 0});

        // for( int d=0;d<4;d++){
        //     int nc = dr[d];
        //     int nr = dc[d];
        //     if(nr>=0 && nc >=0 && nc<m && nr < n){
        //         long long cost = a[0][0]+a[nr][nc];
        //         dp[nr][nc][0][d]=cost;
        //         p.push({cost, nr, nc, d, 0});
        //     }
        // }
        if( n==1 && m ==1) return a[0][0];
        while(!p.empty()){
            auto [cost, r, c, d, t] = p.top();
            p.pop();
             if( cost !=dp[r][c][t][d]) continue;
             if( r==n-1 && c== m-1 ) return cost;
            for( int i=0;i<4;i++){
                int nr = r+dr[i];
                int nc = c+dc[i];
                if( nr<n && nr>=0 && nc<m && nc>=0){
                    int nt = t;
                    if(d!=4 && i != d){
                        nt++;
                    }
                    if(nt>k) continue;
                    long long ncost = cost+a[nr][nc];
                    if( ncost < dp[nr][nc][nt][i]){
                        dp[nr][nc][nt][i] = ncost;
                            p.push({ncost, nr, nc, i, nt});
                    }
                }
            }
        }
        return -1;
    }
};