class Solution {
public:
int cnt=0;
    void fun(int i,int n , vector<int>&a,vector<int>&b,vector<int>&c){
        if(i==n+1){
            cnt++;
            return ;
        }
        for(int j=1;j<=n;j++){
            if(a[j]==1 || b[i-j+n]==1 || c[i+j]==1) continue;
            a[j]=1;
            b[i-j+n]=1;
            c[i+j]=1;
            fun(i+1,n,a,b,c);
             a[j]=0;
            b[i-j+n]=0;
            c[i+j]=0;
        }

    }
    int totalNQueens(int n) {
        cnt=0;
        vector<int>a(n+1,0),b(2*n+1,0),c(2*n+1,0);
        fun(1,n,a,b,c);
        return cnt;
    }
};