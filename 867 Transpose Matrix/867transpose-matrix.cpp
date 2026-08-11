class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& a) {
        int i,j;
        vector<vector<int>>ans(a[0].size(),vector<int>(a.size(),0));
        vector<int>temp;
        for(i=0;i<a.size();i++){
            for(j=0;j<a[0].size();j++){
                ans[j][i]=a[i][j];
            }

        }
        return ans;
    }
};