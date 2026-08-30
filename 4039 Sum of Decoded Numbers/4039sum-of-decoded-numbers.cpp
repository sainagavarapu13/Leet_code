class Solution {
public:
    int power( long long x , long long y){
        long long mod = 1e9+7;
        long long p=1;
        while( y>0){
            if( y%2==1){
                p=(p*x)%mod;
            }
            x = (x*x)%mod;
            y/=2;
        }
        return p;
    }
    int sumDecoded(vector<long long>& a) {
        long long ans=0;
        long long mod = 1e9+7;
        for( long long i : a){
            int w = i%10;
            long long d = i/10;
            string s= to_string(d);
            long long x = stoll(s.substr(0,w));
            long long y = stoll(s.substr(w));
            ans = (ans+(power(x,y)))%mod;
        }
        return (int)ans;
    }
};