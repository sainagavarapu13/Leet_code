class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& a) {
        vector<int>f(201,0);
        int i;
        map<int,int>mp;
        for(auto& i:a) mp[i]++;
        int m=-1;
        for(auto&[n,c]:mp) m=max(m,c);
        vector<vector<int>>ans(m);
      
        for(i=0;i<a.size();i++){
            f[a[i]]++;
            if(f[a[i]]>0){
                ans[f[a[i]]-1].push_back(a[i]);
            }
        }
    return ans;
    }
};