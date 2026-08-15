class Solution {
public:
    int minOperations(string s) {
        int n = s.size(),res = INT_MAX;
        for(int i=0;i<n;i++){
            int l = i;
            for(int j=0;j<n/2;j++){
                int x = (j+i)%n;
                int y = (n-1-j+i)%n;
                int d = abs(s[x]-s[y]);
                // cout<<s[x]<<" "<<s[y]<<endl;
                l += min(d,26-d);
                // cout<<d<<" "<<26-d<<endl;
            }
            res = min(res,l);
        }
        return res;
    }
};