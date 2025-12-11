class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& a, int k) {
        vector<pair<int,int>>p;
        int i,j;
        for(i=0;i<a.size();i++){
            int cnt=0;
            for(j=0;j<a[0].size();j++){
                if(a[i][j]==1){
                    cnt++;
                }
            }
            p.push_back({cnt,i});
        }
        sort(p.begin(),p.end(),[](auto& x,auto& y){
            if(x.first==y.first){
                return x.second<y.second;
            }
            else return x.first<y.first;
        });
        vector<int>ans;
        for(auto& i:p){
            ans.push_back(i.second);
            if(ans.size()==k){
                return ans;
            }
        }
        return ans;
    }
};