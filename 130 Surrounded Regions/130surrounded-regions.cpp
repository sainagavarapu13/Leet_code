class Solution {
public:
    void fun( int i , int j , vector<vector<char>>& a){
        if( i<0 || j<0 ||i>=a.size() || j>=a[0].size()){
            return ;
        }
        if( a[i][j]!='O') return;
        a[i][j]= '#';
        fun( i-1, j , a);
        fun( i+1, j , a);
        fun( i, j+1,a);
        fun( i,j-1,a);
    }
    void solve(vector<vector<char>>& a) {
        for( int i=0;i<a.size();i++){
            fun( i, 0,a);
            fun( i,a[0].size()-1,a);
        }
        for( int i=0;i<a[0].size();i++){
            fun(0,i,a);
            fun( a.size()-1,i,a);
        }
        for( int i=0;i<a.size();i++){
            for( int j =0;j<a[0].size();j++){
                if( a[i][j]=='O') a[i][j]='X';
                else if( a[i][j]=='#') a[i][j]='O';
            }
        }
    }
};