class Solution {
public:
    int findMaxVal(int n, vector<vector<int>>& restrictions, vector<int>& diff) {
        vector<long long> v(n,2e18);
        v[0] = 0;
        for(auto &x:restrictions){
            v[x[0]] = min(v[x[0]],(long long)x[1]);
        }
        for(int i=0;i<n-1;i++){
            v[i+1] = min(v[i+1],v[i]+diff[i]);
        }
        for(int i=n-1;i>0;i--){
            v[i-1] = min(v[i-1],v[i]+diff[i-1]);
        }
        long long maxi = 0;
        for(long long x:v){
            maxi = max(maxi,x);
        }
        return (int) maxi;
    }
};