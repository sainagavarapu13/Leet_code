class Solution {
public:
    int ans = INT_MAX;
    void dfs(vector<int> &v,vector<int> &c,int k,int i){
        if(i==v.size()){
            ans = min(ans,*max_element(c.begin(),c.end()));
            return;
        }
        for(int j=0;j<k;j++){
            c[j] += v[i];
            // cout<<c[j]<<" ";
            dfs(v,c,k,i+1);
            c[j] -= v[i];
            if(c[j]==0) break;
        }
        // cout<<ans<<endl;
    }
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> children(k);
        dfs(cookies,children,k,0);
        return  ans;
    }
};
