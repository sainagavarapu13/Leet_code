class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& a, int b) {
        queue<tuple<int, int , int>>q;
        if( a[0][0]==1 ){
            b--;
        }
        if( b < 1) return false ;
        vector<vector<int>>ans(a.size(), vector<int>(a[0].size(), -1));
        ans[0][0]= b;
        q.push({0,0,b});
        vector<int>bx = {1, -1, 0, 0};
        vector<int>by = { 0,0,1,-1};
        while( !q.empty()){
            auto [x, y, h] = q.front();
            q.pop();
            if( x == a.size()-1 && y == a[0].size()-1) return true;
            for( int i=0;i<4;i++){
                int k = x+bx[i];
               int j = y+by[i];
               int nh = h;
                if( k<0 || j <0 || k>a.size()-1 || j>a[0].size()-1) continue;
                if( a[k][j]==1) nh--;
                if( nh<1) continue;
                if( ans[k][j]>=nh) continue;
                ans[k][j]=nh;
                q.push({k,j,nh});

    

            }
           
                   
            }
             return false;
        }
       
    };
