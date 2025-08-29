class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& a) {
        vector<int>row;
        vector<int>col;
        int i,j,m=-1;
        for(i=0;i<a.size();i++){
            m=-1;
            for(j=0;j<a[0].size();j++){
                m=max(m,a[i][j]);
            }
            row.push_back(m);
        }
        for(i=0;i<a.size();i++){
            m=-1;
            for(j=0;j<a[0].size();j++){
                m=max(m,a[j][i]);
            }
            col.push_back(m);
        }
        int sum=0;
       for(i=0;i<a.size();i++){
        for(j=0;j<a[0].size();j++){
            int ans=min(row[i],col[j]);
            sum+=abs(ans-a[i][j]);
        }
       }
        return sum;
    }
};