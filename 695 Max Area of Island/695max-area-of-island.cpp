class Solution {
public:
    
    int cnt=0;
    int fun( int i , int j , vector<vector<int>>& a, bool v, int ans){
        if( i<0 || j<0 || i>=a.size() || j>=a[0].size()){
            return 0;
        }
        if( a[i][j]!=1) return 0;
        if( v){ cnt++;
        // cout << i << " " << j <<endl;
        }
        a[i][j]=10;
       // ans++;
       return 1+ fun( i-1, j, a, false,ans) + fun( i+1, j,a,false,ans)
        +fun( i ,j+1, a,false,ans)+
        fun( i,j-1,a,false,ans);
       // return ans;
    }
    int maxAreaOfIsland(vector<vector<int>>& a) {
        int res = INT_MIN;
        
        for( int j =0;j<a.size();j++)
        for( int i=0;i<a[0].size();i++)
        {

            int ans = fun(j,i,a,true,0);
            res = max( res, ans);
            
        }
        return res;
    }
};
