class Solution {
public:
    bool fun(int i, int j,vector<vector<char>>& b , string& w , int a ){
            if( a == w.size()) return 1;
            if( i<0 || j<0 || i>=b.size() || j >=b[0].size() || b[i][j]!=w[a]) return 0;
            if( b[i][j]=='#') return 0;
           char val = b[i][j];
            b[i][j]='#';
            bool ans = fun( i-1, j,b, w,a+1) || 
                        fun(i+1, j, b,w, a+1) ||
                        fun( i ,j+1, b,w, a+1) ||
                        fun( i , j-1,b,w, a+1);
            b[i][j]=val;
            
            return ans;
    }
    bool exist(vector<vector<char>>& b, string word) {
       
        for( int i=0;i<b.size();i++){
            for( int j =0;j<b[0].size();j++){
                 
                if( fun( i,j,b, word,0)){
                    return 1;
                }
            }
        }
        return 0;
    }
};