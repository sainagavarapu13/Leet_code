class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& a) {
        long long sum=0,cnt=0;
        vector<int>neg;
        int flag=0,m=INT_MAX,odd=0;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                if(a[i][j]==0) flag=1;
               else  if(a[i][j]>0){
                    sum+=a[i][j];
                }
               else {
                cnt+=(-1)*a[i][j];
                odd++;
               }
               m=min(m,abs(a[i][j]));
            }
        }
        if(flag) return sum+cnt;
        if(odd==0) return sum;
        if(odd%2==0) return sum+cnt;
         return sum+cnt-(2ll*m*(1));

    }
};