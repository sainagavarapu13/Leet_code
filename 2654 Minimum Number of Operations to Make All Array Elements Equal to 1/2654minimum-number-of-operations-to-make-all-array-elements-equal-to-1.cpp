class Solution {
public:
    int minOperations(vector<int>& a) {
        int n=a.size();
        int one=0,g=a[0];
        for(int i=0;i<n;i++){
            if(a[i]==1) one++;
            g=gcd(g,a[i]);
        }
        if(g!=1) return -1;
        if(one>0) return n-one;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
             g=a[i];
            for(int j=i+1;j<n;j++){
                g=gcd(g,a[j]);
                if(g==1){
                    mini=min(mini,j-i+1);
                    break;
                }
            }
        }
        return mini+n-2;
    }
};