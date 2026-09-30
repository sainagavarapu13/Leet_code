class Solution {
public:
 vector<vector<int>>res;
    void per(vector<int>& a,vector<int>&ans,int idx,vector<int>& vis){
        if(idx==a.size()){
            res.push_back(ans);
            return;
        }
        for(int i=0;i<a.size();i++){
            if(vis[i]==0){
            ans[idx] = a[i];
            vis[i]=1;
            
            per(a,ans,idx+1,vis);
            vis[i]=0;
            }
        }
       
    }
    vector<vector<int>> permute(vector<int>& a) {
        res.clear();
        vector<int>vis(a.size(),0);
        vector<int>ans(a.begin(),a.end());
        per(a,ans,0,vis);
        return res;
    }
};