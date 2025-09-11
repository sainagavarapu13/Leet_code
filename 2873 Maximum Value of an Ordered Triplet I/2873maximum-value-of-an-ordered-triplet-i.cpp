class Solution {
public:
    long long maximumTripletValue(vector<int>& a) {
        long long m=INT_MIN;
        long long ans;
        int i,j,k;

       for( i=0;i<a.size();i++){
        for(j=i+1;j<a.size();j++){
            for(k=j+1;k<a.size();k++){
                 ans=(long long)(a[i]-a[j])*a[k];
                m=max(m,ans);
            }
        }
       }
       if(m<0) return 0;
       return m;
    }
};