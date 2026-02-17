class Solution {
public:
    bool isp(long long val){
        if(val<=1) return false;
        for(long long i=2;i*i<=val;i++){
            if(val%i==0) return false;
        }
        return true;
    }
    long long sumOfLargestPrimes(string s) {
        set<long long,greater<long long>> a;
        for(long long i=0;i<s.length();i++){
            string t = "";
            for(int j=i;j<s.length();j++){
                t += s[j];
                long long b = stol(t);
                if(isp(b)) {
                    a.insert(b);
                    // cout<<b<<endl;
                }
            }
        }
        long long res = 0,count = 0;
        for(auto it = a.begin(); it != a.end() && count < 3; ++it) {
    res += *it;
    count++;
}
        return res;
    }
};