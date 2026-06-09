class Solution {
public:
int cnt=0;
    void fun( int i , int j , vector<vector<char>>& a, bool v){
        if( i<0 || j<0 || i>=a.size() || j>=a[0].size()){
            return ;
        }
        if( a[i][j]!='1') return ;
        if( v){ cnt++;
        // cout << i << " " << j <<endl;
        }
        a[i][j]='#';
        fun( i-1, j, a, false);
        fun( i+1, j,a,false);
        fun( i ,j+1, a,false);
        fun( i,j-1,a,false);
    }
    int numIslands(vector<vector<char>>& a) {
        for( int j =0;j<a.size();j++)
        for( int i=0;i<a[0].size();i++)
        {
            fun(j,i,a,true);
            fun(j,i,a,true);
        }
       return cnt;
    }
};