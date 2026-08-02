class Solution {
public:
    long long maxPairStrength(vector<int>& a) {
        long long maxi=0;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a.size();j++){
                if(i==j) continue;
                long long g=1LL*gcd(a[i],a[j])*gcd(a[i],a[j]);
                long long p =(1LL*a[i]*a[j])/g;
                maxi=max(maxi,p);
            }
        }
        return maxi;
    }
};