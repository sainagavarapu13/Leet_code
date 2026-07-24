class Solution {
public:
    bool fun(int i,int j,int m,vector<vector<int>>& a,vector<vector<int>>& vis){
       
        if(i>=a.size()||j>=a[0].size()||i<0||j<0) return false;
        if(a[i][j]>m) return false;
         if(i==a.size()-1&&j==a[0].size()-1) return true;
       
          if (vis[i][j])
            return false;
            vis[i][j]=1;
             bool k=false;
        if (i + 1 < a.size()) k = k || fun(i + 1, j, m, a, vis);
        if (j + 1 < a[0].size()) k = k || fun(i, j + 1, m, a, vis);
        if (i - 1 >= 0) k = k || fun(i - 1, j, m, a, vis);
        if (j - 1 >= 0) k = k || fun(i, j - 1, m, a, vis);
        return k;
    }
    int swimInWater(vector<vector<int>>& a) {
        int start = INT_MAX,end=INT_MIN;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                start=min(start,a[i][j]);
                end=max(end,a[i][j]);
            }
        }
        int ans=-1;
        int n=a.size();
        int m=a[0].size();
        while(start<=end){
            int mid = start+(end-start)/2;
            vector<vector<int>>vis(n,vector<int>(m,0));
            if(fun(0,0,mid,a,vis)){
                end=mid-1;
                ans=mid;
            }
            else start=mid+1;
        }
        return ans;
    }
};