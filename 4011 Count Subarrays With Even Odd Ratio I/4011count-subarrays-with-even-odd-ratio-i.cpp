class Solution {
public:
    int countRatioSubarrays(vector<int>& n, int a, int b) {
        vector<int>e(n.size(),0);
        vector<int>o(n.size(),0);
        if(n[0]%2==0) e[0]++;
        else o[0]++;
        int ans=0;
        for( int i=1;i<n.size();i++){
           e[i]+=(e[i-1]+(n[i]%2==0));
           o[i]+=(o[i-1]+(n[i]%2!=0));
        }
      for( int l=0;l<n.size();l++){
        for( int r =l;r<n.size();r++){
            int eve = e[r]-(l ? e[l-1]:0);
            int odd = o[r]-(l? o[l-1]:0);
            if( odd>0 && 1ll*eve*b <= 1ll*odd*a) ans++;
        }
      }
      return ans;
    }
};