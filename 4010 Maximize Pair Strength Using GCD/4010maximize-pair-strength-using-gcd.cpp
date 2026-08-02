class Solution {
public:
    long long maxPairStrength(vector<int>& a) {
        long long ma =0;
        for( int i=0;i<a.size()-1;i++){
            for( int j =i+1;j<a.size();j++){
                ma = max(ma,(1LL * a[i] * a[j])/(1LL*gcd(a[i], a[j])*gcd(a[i], a[j])));
            }
        }
        return ma;
    }
};