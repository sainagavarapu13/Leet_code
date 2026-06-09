class Solution {
public:
    int fun( int i , int j,vector<vector<int>>& a){
            if( i<0 || j<0 || i>=a.size() || j>=a[0].size()) return 0;
            if( a[i][j]==0) return 0;
            int ans=a[i][j];
            a[i][j] = 0;
           return ans+fun( i+1,j,a)+ fun( i-1,j,a)+ fun( i,j+1,a)+fun( i,j-1,a);
         
    }
    int findMaxFish(vector<vector<int>>& a) {
        int res=0;
        for( int i=0;i<a.size();i++){
            for( int j=0;j<a[0].size();j++){
               // cout << fun(i,j,a,0) << endl;
                 if(a[i][j]>0)res = max( res , fun(i,j,a));
            }
        }
        return res;
    }
};