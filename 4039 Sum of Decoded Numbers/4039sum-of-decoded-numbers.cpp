class Solution {
public:
    int power(long long x,long long y){
        int mod = 1e9+7;
        long long res = 1;
        while(y>0){
            if((y&1)) res=((res%mod)*(x%mod))%mod;
            x=((x%mod)*(x%mod))%mod;
            y/=2;
        }
        return res;
    }
    int sumDecoded(vector<long long>& a) {
        int mod = 1e9+7;
        int sum =0 ;
        
        for(int i=0;i<a.size();i++){
            int sz = (a[i]%10);
            string s = to_string(a[i]/10);
            long long x = stoll(s.substr(0,sz));
            long long y = stoll(s.substr(sz));
            sum = ((sum%mod)+(power(x,y)%mod))%mod;
        }
        return sum;
    }
};