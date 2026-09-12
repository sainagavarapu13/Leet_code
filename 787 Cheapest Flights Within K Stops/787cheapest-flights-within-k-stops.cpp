class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& a, int src, int dst, int k) {
        
        vector<int>d(n, INT_MAX);
        d[src]=0;
        for( int i=0;i<=k;i++){
            vector<int>temp=d;
            for(int j=0;j<a.size();j++){
                int u =a[j][0];
                int v = a[j][1];
                int c = a[j][2];
                if(d[u]!=INT_MAX){
                    temp[v]= min(temp[v], d[u]+c);
                }
            }
            d = temp;
        }
       if(d[dst]==INT_MAX) return -1;
         return d[dst];
    }
};