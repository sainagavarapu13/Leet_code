class Solution {
public:
    bool checkValid(vector<vector<int>>& a) {
        int i,j;
        for(i=0;i<a.size();i++){
            for(j=0;j<a.size();j++){
                if(count(a[i].begin(),a[i].end(),a[i][j])>1){
                    return 0;
                }
               
            }
        }
        vector<int>ans;
           for(i=0;i<a.size();i++){
            for(j=0;j<a.size();j++){
               
                    ans.push_back(a[j][i]);
                
            }
           
            for(int I=0;I<ans.size();I++){
            if(count(ans.begin(),ans.end(),ans[I])>1){
                return 0;
            }
            }
            ans.clear();
        }
        return 1;
    }
};