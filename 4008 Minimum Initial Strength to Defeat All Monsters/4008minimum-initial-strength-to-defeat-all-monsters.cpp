class Solution {
public:
    bool check(long long x,vector<int>& a,vector<long long>& b){
        long long c = x;
        for(int i=0;i<a.size();i++){
            if(c+b[i]<a[i]) return false;
            c = max(0LL,c-a[i]);
        }
        return true;
    }
    long long minInitialStrength(vector<int>& a, vector<vector<int>>& v) {
        int n = a.size();
        vector<long long> d(n+1),b(n);
        for(auto &x:v){
            d[x[0]] += x[2];
            if(x[1]+1<n) d[x[1]+1] -= x[2];
        }
        b[0] = d[0];
        for(int i=1;i<n;i++){
            b[i] = b[i-1]+d[i];
        }
        long long l = 0,r = 1e15;
        while(l<r){
            long long m = l +(r-l)/2;
            if(check(m,a,b)) r = m;
            else l = m+1;
        }
        return l;
    }
};