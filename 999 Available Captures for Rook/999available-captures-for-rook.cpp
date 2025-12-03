class Solution {
public:
    int numRookCaptures(vector<vector<char>>& a) {
        int r,c;
        int f=1;
        for( int i=0;i< a.size();i++){
            for( int j=0;j<a[0].size();j++){
                if( a[i][j]=='R'){
                    r=i;
                    c=j;
                    f=0;
                    break;
                }
            }
            if( f==0) break;
        }
        int cnt=0;
        for( int i=c;i>=0;i--){
            if( a[r][i]=='B') break;
            if( a[r][i]=='p'){
                cnt++;
                break;
            }
        } for( int i=c+1;i<a[0].size();i++){
            if( a[r][i]=='B') break;
            if( a[r][i]=='p'){
                cnt++;
                break;
            }
        } for( int i=r-1;i>=0;i--){
            if( a[i][c]=='B') break;
            if( a[i][c]=='p'){
                cnt++;
                break;
            }
        }
         for( int i=r+1;i<a.size();i++){
            if( a[i][c]=='B') break;
            if( a[i][c]=='p'){
                cnt++;
                break;
            }
        }
        return cnt;
    }
};