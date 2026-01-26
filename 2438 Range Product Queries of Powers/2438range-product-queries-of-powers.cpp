class Solution {
public:
    long long modPow(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<long long> v;
        v.push_back(0);
        long long mod = 1e9 +7;
        vector<int> res;
        int a=0,o=n;
        while(n>0){
            int t = n%2;
            if(t!=0) v.push_back(a);
            n = n/2;
            a++;
        }
        for(int i=1;i<v.size();i++){
            v[i] = v[i]+v[i-1];
        }
        for(int i=0;i<queries.size();i++){
            long long diff = v[queries[i][1] + 1] - v[queries[i][0]];
            long long b = modPow(2,diff,mod);
            res.push_back((int)b);
        }
        return res;
    }
};