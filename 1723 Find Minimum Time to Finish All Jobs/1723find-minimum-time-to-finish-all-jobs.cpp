class Solution {
public:
   
    bool dfs(int ind,vector<int>& g, int k,int limit,  vector<int>& w){
        if( ind== g.size()) return true;
        for( int i=0;i<k;i++){
            if(i>0 && w[i]==w[i-1]) continue;
            if(w[i]+g[ind]<=limit){
                w[i]+=g[ind];
               if( dfs(ind+1,g,k,limit,w)) return 1;
               w[i]-=g[ind];

            }
            if( w[i]==0) break;
        }
        return false;
    }
   
    int minimumTimeRequired(vector<int>& g, int k) {
        int low = *max_element(g.begin(), g.end());
        sort( g.rbegin(), g.rend());
        int sum=0;
        for( int i : g){
            sum+=i;
        }
       int high = sum;
       int ans= 0;
       while( low<=high){
        int mid = (high+low)/2;
        vector<int>w(k,0);
        if( dfs(0,g,k,mid,w)){
            ans = mid;
            high = mid-1;
        }else low = mid+1;
       }
       return ans;
    }
};