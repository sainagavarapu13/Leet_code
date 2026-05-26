class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& a) {
        queue<pair<vector<vector<int>>,int>>q;
        q.push({a,0});
        set<vector<vector<int>>> vis;
        int n=a.size(),m=a[0].size();
        vector<vector<int>>target = {{1,2,3},{4,5,0}};
        int row,col;
        vis.insert(a);
        
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            if(x==target) return y;
            for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                if(x[i][j]==0){
                    row=i;
                    col=j;
                    break;
                }
            }
        }
            if(col-1>=0){
                swap(x[row][col],x[row][col-1]);
                if(!vis.count(x)){
                    vis.insert(x);
                    q.push({x,y+1});
                }
                swap(x[row][col],x[row][col-1]);
            }
            if(col+1<m){
                swap(x[row][col],x[row][col+1]);
                 if(!vis.count(x)){
                    vis.insert(x);
                     q.push({x,y+1});
                }
                swap(x[row][col],x[row][col+1]);
            }
            if(row-1>=0){
                swap(x[row][col],x[row-1][col]);
                if(!vis.count(x)){
                    vis.insert(x);
                     q.push({x,y+1});
                }
                swap(x[row][col],x[row-1][col]);
            }
            if(row+1<n){
                swap(x[row][col],x[row+1][col]);
                if(!vis.count(x)){
                    vis.insert(x);
                     q.push({x,y+1});
                }
                swap(x[row][col],x[row+1][col]);
            }
        }
        return -1;
    }
};