class Solution {
public:
    int minJumps(vector<int>& a) {
        queue<pair<int,int>>q;
        map<int , vector<int>>m;
        for( int i=0;i<a.size();i++){
            m[a[i]].push_back(i);
        }
        vector<int>visit(a.size(),0);
        q.push({0,0});
        visit[0]=1;
        int ans=INT_MAX;
        while( !q.empty()){
            auto [x,y]= q.front();
           
            q.pop();
             if( x == a.size()-1){
                ans = min( ans , y);
                continue;
            }
            if( x-1>=0 && visit[x-1]!=1){ 
                visit[x-1]=1;
                q.push({x-1,y+1});}
            if( x+1<a.size() && visit[x+1]!=1) { visit[x+1]=1;q.push({x+1,y+1});}
           for( int i:m[a[x]]){
            if( visit[i]!=1){
                visit[i]=1;
                 q.push({i,y+1});
            }
           }
           m[a[x]].clear();
           
        }
        return ans;
    }
};