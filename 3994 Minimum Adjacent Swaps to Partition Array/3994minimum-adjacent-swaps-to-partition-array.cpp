class Solution {
public:
    int minAdjacentSwaps(vector<int>& n, int a, int b) {
        long long c1=0, c2=0, res=0;
        long long mod = 1000000007;
        for( int i : n ){
            if( i<a){
                res+=c1+c2;

            }else if( i<=b){
                c1++;
                res+=c2;
            }else{
                c2++;
            }
        }
        return res%mod;
    }
};