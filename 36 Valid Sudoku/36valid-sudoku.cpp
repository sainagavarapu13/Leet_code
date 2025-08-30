class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& a) {
        int i,j;
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                if(a[i][j]!='.'&&count(a[i].begin(),a[i].end(),a[i][j])>1){
                    cout<<"row";
                    return 0;
                }
               
            }
        }
        string ans;
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                 if(a[j][i]!='.') {
                    ans.push_back(a[j][i]);
                }
            }
            // for(auto& i: ans) cout<<i<<" ";
            // cout<<"\n";
            for(int I=0;I<ans.size();I++){
            if(count(ans.begin(),ans.end(),ans[I])>1){
                return 0;
            }
            }
            ans.clear();
        }
        ans.clear();
         for(int boxRow = 0; boxRow < 9; boxRow += 3) {
            for(int boxCol = 0; boxCol < 9; boxCol += 3) {
                for(i = boxRow; i < boxRow + 3; i++) {
                    for(j = boxCol; j < boxCol + 3; j++) {
                        if(a[i][j] != '.') {
                            ans.push_back(a[i][j]);
                        }
                    }
                }
                for(int I = 0; I < ans.size(); I++) {
                    if(count(ans.begin(), ans.end(), ans[I]) > 1) {
                        return false;
                    }
                }
                ans.clear();
            }
        }
        return 1;
    }
};