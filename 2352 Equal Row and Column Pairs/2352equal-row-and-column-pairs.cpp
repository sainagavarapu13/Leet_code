class Solution {
public:
    int equalPairs(vector<vector<int>>& a) {
        vector<vector<int>>b(a.size(),vector<int>(a.size()));
        int i,j;
        for(i=0;i<a.size();i++){
            for(j=0;j<a.size();j++){
                b[j][i]=a[i][j];
            }
        }
vector<int>check;
       int cnt=0;
            for(auto j:a){
             for(auto& i: b){
                bool f=equal(j.begin(),j.end(),i.begin(),i.end());
                 if(f==1) cnt++;
             }
          }
         
        
        return cnt;
    }
};