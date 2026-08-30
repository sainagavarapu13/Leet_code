class Solution {
public:
    long long pow(long long x,long long y){
        long long mod = 1e9+7;
        long long ans = 1;
        while(y>0){
            if(y%2==1){
                ans = (ans*x)%mod;
            }
            x = (x*x)%mod;
            y /= 2;
        }
        return ans;
    }
    int sumDecoded(vector<long long>& nums) {
        long long mod = 1e9 + 7;
        long long ans = 0;
        for(long long num:nums){
            long long w = num%10,d = num/10;
            string s = to_string(d);
            long long x = stoll(s.substr(0,w));
            long long y = stoll(s.substr(w));
            ans = (ans + pow(x,y))%mod;
        }
        return ans;
    }
};