class Solution {
public:
  
    int e,  f;
   long long fun( vector<long long>& p, int l , int r ){
    int len = r-l+1;    
   int one = p[r] - (l > 0 ? p[l-1] : 0);
   long long ans;
    if(one > 0) ans= 1ll*one*len*e;
    else ans = f;
    if( len%2==0){
        int mid= (l+r)/2;
        ans = min( ans , (long long)fun(p,l,mid)+fun( p,mid+1,r));
    }
   return ans ;
   }
    long long minCost(string s, int ei, int fi) {
        e = ei;
        f=fi;
        vector<long long>p(s.size());
        if( s[0]=='1') p[0]=1;
        for(int i=1;i<s.size();i++){
            p[i] = p[i-1]+(s[i]=='1'?1:0);
        }
       int n=s.size();
        return fun(p,0,n-1);
    }
};