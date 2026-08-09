class Solution {
public:
    bool fun(int k,vector<vector<int>>&pre){
        int n = pre.size()-1;
        int m = pre[0].size()-1;
        int minR = n,maxR = -1;
        int minC = m,maxC =-1;
        for(int r=0;r+k<=n;r++){
            for(int c = 0;c+k<=m;c++){
                int sum = pre[r+k][c+k]-pre[r][c+k]-pre[r+k][c]+pre[r][c];
                if(sum==k*k){
                    minR = min(minR,r);
                    maxR = max(maxR,r);
                    minC = min(minC,c);
                    maxC = max(maxC,c);
                }
            }
        }
        if(maxR!=-1&&maxR-minR>=k) return true;
        if(maxC!=-1&&maxC - minC>=k) return true;
        return false;
    }
    int maxArea(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        int l = 1,h = min(n,m);
        int ans =0;
        vector<vector<int>>pre(n+1,vector<int>(m+1,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                pre[i+1][j+1] = a[i][j]+pre[i][j+1]+pre[i+1][j]-pre[i][j];
            }
        }
        while(l<=h){
            int mid = (l+h) / 2;
            if(fun(mid,pre)){
                ans = mid;
                l = mid+1;
            }
            else h = mid-1;
        }
        return ans*ans;
    }
};