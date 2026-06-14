class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& a) {
        vector<int>ans(a[0].size(),0);
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[i].size();j++){
                if(a[i][j]==1){
                    ans[i]++;
                   // ans[j]++;
                }
            }
        }
        return ans;

    }
};