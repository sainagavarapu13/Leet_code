class Solution {
public:
    int minimumCost(vector<int>& n, int k) {
        long long t =k;
        long long mod=1e9+7;
        long long cost =0, in=1;
        for( int i=0;i<n.size();i++){
               if(n[i]>t ){
                long long need = (n[i]-t+k-1)/k;
                t+=1LL*k*need;
               __int128 first = in;
                __int128 last = in + need - 1;
                long long sum = (long long)(((first + last) * need / 2) % mod);
                in+=need;
                cost+=sum%mod;

               }
               t-=n[i];
            }
            return cost%mod;
        }
    
};