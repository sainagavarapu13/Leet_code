class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& in) {
        sort(in.begin(),in.end(),[](vector<int> a,vector<int> b){
            if(a[0]==b[0]){
                return a[1]>b[1];
            }
            return a[0]<b[0];
        });
        int res = 0,n = in.size();
        int d = in[0][0],e = in[0][1];
        for(int i=0;i<n;i++){
            if(i==n-1) continue;
            int a = in[i+1][0];
            int b = in[i+1][1];
            if(d<=a && e>=b){
                res++;
            }
            else{
                d = a;
                e = b;
            }
        }
        return n-res;
    }
};