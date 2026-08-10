class Solution {
public:
    void gameOfLife(vector<vector<int>>& a) {
        vector<vector<int>>b = a;
        vector<int>x = {1,-1,0,0,-1,1,-1,1};
        vector<int>y = {0,0,-1,1,-1,1,1,-1};
        for( int i=0;i<a.size();i++){
            for( int j=0;j<a[0].size();j++){
                    int o=0,z=0;
                    for( int k=0;k<x.size();k++){
                        int n = i+x[k];
                        int m = j+y[k];
                        if( n>=a.size() || n<0 || m>=a[0].size() || m<0) continue;
                        if(a[n][m]==0) z++;
                        else o++;
                    }
                   if( a[i][j]==1){
                    if( o<2 || o>3) b[i][j]=0;
                    else if( o==2 || o==3) continue;
                   }else{
                    if( o==3) b[i][j]=1;
                   }
            }
        }

        a = b;
    }
};