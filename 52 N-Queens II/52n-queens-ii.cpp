class Solution {
public:
int cnt=0;
    void fun( int i,int n,vector<int>& c, vector<int>& a,vector<int>& b){
        if( i==n) {
            cnt++;
            return;
        }
        for( int j=0;j<n;j++){
            if( c[j]||a[i-j+n]||b[i+j]) continue;
            c[j]=1;
            a[i-j+n]=1;
            b[i+j]=1;
            fun( i+1,n,c, a, b);
            c[j]=0;
            a[i-j+n]=0;
            b[i+j]=0;

        }
    }
    int totalNQueens(int n) {
        vector<int>a(2*n,0),b(2*n,0),c(n,0);
        fun( 0,n,c,a,b);
        return cnt;
    }
};