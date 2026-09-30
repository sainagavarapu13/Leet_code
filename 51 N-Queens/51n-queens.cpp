class Solution {
public:
 vector<vector<string>>ans;
 vector<string>temp;
 void fun(int i,int n , vector<int>&a,vector<int>&b,vector<int>&c){
        if(i==n+1){
            ans.push_back(temp);
            return ;
        }
        for(int j=1;j<=n;j++){
            if(a[j]==1 || b[i-j+n]==1 || c[i+j]==1) continue;
            a[j]=1;
            b[i-j+n]=1;
            c[i+j]=1;
            string t;
            for(int k=1;k<=n;k++){
                if(j==k) t+='Q';
                else t+='.';
            }
            temp.push_back(t);
            fun(i+1,n,a,b,c);
             a[j]=0;
            b[i-j+n]=0;
            c[i+j]=0;
            t.clear();
            temp.pop_back();
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        ans.clear();
        temp.clear();
        vector<int>a(n+1,0),b(2*n+1,0),c(2*n+1,0);
        fun(1,n,a,b,c);
        return ans;
    }
};