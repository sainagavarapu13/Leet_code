class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& a) {
     long long pre=1,suff=1;
     vector<vector<int>>ans(a.size(),vector<int>(a[0].size(),-1));
     for(int i=0;i<a.size();i++){
        for(int j=0;j<a[0].size();j++){
            ans[i][j]=pre;
            pre=(pre*a[i][j])%12345;
        }
     }
     for(int i=a.size()-1;i>=0;i--){
        for(int j=a[0].size()-1;j>=0;j--){
            ans[i][j] = (ans[i][j]*suff)%12345;
            suff = (suff*a[i][j])%12345;
        }
     }
     return ans;
    }
};