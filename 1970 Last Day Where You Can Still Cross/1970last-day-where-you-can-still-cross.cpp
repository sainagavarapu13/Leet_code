class Solution {
public:
    bool check(int mid , vector<vector<int>>& a , vector<vector<int>>mat,int row,int col){
        for(int i=0;i<mid;i++){
            mat[a[i][0]-1][a[i][1]-1]= 1;
        }
        queue<pair<int,int>>q;
        vector<int>dx={1,-1,0,0};
        vector<int>dy={0,0,1,-1};
        for(int i=0;i<mat[0].size();i++){
            if(mat[0][i]==0){
            q.push({0,i});
        }
        while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        if (x == row - 1)
            return true;

        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if (nx >= 0 && nx < row &&
                ny >= 0 && ny < col &&
                mat[nx][ny] == 0) {

                mat[nx][ny] = 1;
                q.push({nx, ny});
            }
        }
    }
        
    }
    return false;
    }
    int latestDayToCross(int row, int col, vector<vector<int>>& a) {
        int n=a.size();
        int start=0,end=n,ans;
        vector<vector<int>>mat(row,vector<int>(col,0));
        while(start<=end){
            int mid = (start+end)/2;
            if(check(mid,a,mat,row,col)){
                ans=mid;
                start=mid+1;
            }
            else end = mid-1;
        }
        return ans;
    }
    
};