class Solution {
public:
    int numRookCaptures(vector<vector<char>>& a) {
        int i,j,k,l,row=-1,col=-1;
        for(i=0;i<a.size();i++){
            for(j=0;j<a.size();j++){
                if(a[i][j]=='R'){
                    row=i;
                    col=j;
                   break;
                }
                
            }
        }
        int cnt=0;
       
            for(j=col;j<a.size();j++){
                if(a[row][j]=='B') break;
                if(a[row][j]=='p'){
                    cnt++;
                    break;
                }
             }
           //  cout<<cnt<<" ";
              for(j=row;j<a.size();j++){
                if(a[j][col]=='B') break;
                if(a[j][col]=='p'){
                    cnt++;
                    break;
                }
             }
            // cout<<cnt<<" ";
             for(j=row;j>=0;j--){
                if(a[j][col]=='B') break;
                if(a[j][col]=='p'){
                    cnt++;
                    break;
                }
             }
           //  cout<<cnt<<" ";
              for(j=col;j>=0;j--){
                if(a[row][j]=='B') break;
                if(a[row][j]=='p'){
                    cnt++;
                    break;
                }
             }
            // cout<<cnt<<" ";
             return cnt;
    }
};