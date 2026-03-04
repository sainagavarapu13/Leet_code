class Solution {
public:
    int numSpecial(vector<vector<int>>& a) {
        vector<int>row(a.size(),0);
        vector<int>col(a[0].size(),0);
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                if(a[i][j]==1){
                   
                    row[i]++;
                    col[j]++;
                    
                }
            }
        }
        int cnt=0;
         for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                if(a[i][j]==1 && row[i]==1 && col[j]==1){
                   cnt++;
                    
                }
            }
        }
        return cnt;
   }
};