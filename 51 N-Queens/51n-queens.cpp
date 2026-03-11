class Solution {
public:
vector<vector<string>>ans;
    void fun( int i,int n,vector<int>& c, vector<int>& a,vector<int>& b,vector<string>& r){
        if( i==n) {
            ans.push_back(r);
            return;
        }
        for( int j=0;j<n;j++){
            if( c[j]||a[i-j+n]||b[i+j]){
                 continue;}
            c[j]=1;
            a[i-j+n]=1;
            b[i+j]=1;
            string s;
            for( int k=0;k<n;k++){
                if( k==j) s.push_back('Q');
                else s.push_back('.');
            }
            r.push_back(s);
            fun( i+1,n,c, a, b,r);
            r.pop_back();
            c[j]=0;
            a[i-j+n]=0;
            b[i+j]=0;

        }
    }
   vector<vector<string>> solveNQueens(int n) {
        vector<int>a(2*n,0),b(2*n,0),c(n,0);
        vector<string>r;
        fun( 0,n,c,a,b,r);
        return ans;
    }
};