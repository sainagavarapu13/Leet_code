class Solution {
public:
    long long largestPerimeter(vector<int>& a) {
        sort(a.begin(), a.end());
        int n = a.size();
        vector<long long> p(n);
        p[0] = a[0];
        for(int i = 1; i < n; i++){
            p[i] = p[i - 1] + a[i];
        }
        long long ans = -1;
        for(int i = 2; i < n; i++){
            if(p[i - 1] > a[i]){
                ans = p[i];
            }
        }
        return ans;
    }
};