class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& a) {
        int i,j;
        int n=a.size();
        if (a[0][0] != 0) return false;
        map<int,pair<int,int>>p;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                p[a[i][j]].first=i;
                p[a[i][j]].second=j;
            }
        }
       
        for(int i=1;i<n*n;i++){ 
           auto [x1,y1]=p[i-1];
           auto [x2,y2]=p[i];
           int one=abs(x1-x2);
           int two=abs(y1-y2);
            if((one==1&&two==2)||(one==2&&two==1)){
                continue;
            }
            else return 0;
        }
        return 1;
    }
};