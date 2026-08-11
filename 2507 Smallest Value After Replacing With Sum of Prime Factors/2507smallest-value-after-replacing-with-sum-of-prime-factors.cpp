class Solution {
public:
    //const int MAXI = 1e6;
     vector<int>s;
     void solve(){
        s.resize(1000000, 0);
        for( int i=0;i<1e6;i++) s[i]=i;
       // s[0]=s[1]=;
        for( int i=2;i*i<=1e6;i++){
            if( s[i]==i){
                for( int j = i*i ;j<1e6;j+=i){
                    s[j]=i;
                }
            }
        }
     }
    int fun( int n){
        int sum=0;
        while( n!=1){
            sum+=s[n];
            n/=s[n];
        }
        //cout<< sum << " "<<n<< endl;
        return sum;
    }
    int smallestValue(int n) {
        solve();
        while( n!=s[n]){
            int k = fun(n);
            if( k == n) return n;
            n =k;
        }
        return n;
    }
};