class Solution {
public:
    long long minimalKSum(vector<int>& nu, int k) {
        set<int>n(nu.begin(), nu.end());
        long long ele =k;
        long long a = (ele*(ele+1))/2;
        for( int i:n){
            if( i<=k){
                a-=i;
                a+=k+1;
                k++;
            }else break;
        }
        return a;
    }
};