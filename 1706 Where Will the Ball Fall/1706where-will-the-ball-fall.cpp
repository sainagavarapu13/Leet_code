class Solution {
public:
    vector<int> findBall(vector<vector<int>>& a) {
        int n=a.size();
        int m=a[0].size();
        vector<int>ans;
        int p=0;
        for(int k=0;k<m;k++){
            int i=0;
            int j=k;
            int f=1;
            while(i<n&&j>=0&&j<m){
            if(a[i][j]==1){
                if(j==m-1||a[i][j+1]==-1){
                    ans.push_back(-1);
                    f=0;
                    break;
                }

                i++;
                j++;
            }
            else{
                if(j==0||a[i][j-1]==1){
                    ans.push_back(-1);
                    f=0;
                    break;
                }
                i++;
                j--;
            }
            }
            if(f==1)
            ans.push_back(j);
           
        }
        return ans;
    }
};