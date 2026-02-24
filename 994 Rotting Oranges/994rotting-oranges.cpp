class Solution {
public:
    int orangesRotting(vector<vector<int>>& a) {
        int cnt=0;
         queue<tuple<int , int, int>>q;
        for( int i=0;i<a.size();i++){
            for( int j =0;j<a[i].size();j++){
                if( a[i][j]==1) cnt++;
               if(a[i][j]==2) q.push({i,j,0});
            }
        }
        int ans=0;
        while( !q.empty()){
            auto [x,y,t]=q.front();
            q.pop();
            ans=max(ans, t);
            if( x+1<a.size()){ 
               if(a[x+1][y]==1){
                cnt--;
                a[x+1][y]=2;
                 q.push({x+1,y,t+1});
                 }
                }
            if( x-1>=0 ){
                 if(a[x-1][y]==1){
                    cnt--;
                a[x-1][y]=2;
                 q.push({x-1,y,t+1});}
                } 
            
            if( y+1 <a[0].size()){
                 if(a[x][y+1]==1){
                    cnt--;
                a[x][y+1]=2;
                 q.push({x,y+1,t+1});}
                
            }  if( y-1 >=0){
                 if(a[x][y-1]==1){cnt--;
                a[x][y-1]=2;
                 q.push({x,y-1,t+1});}
                } 
            }
             if( cnt) return -1;
        else return ans;
        }
       
       
    
};