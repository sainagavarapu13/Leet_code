class Solution {
public:
    int earliestTime(vector<vector<int>>& a) {
        int i,m=INT_MAX;
        for(i=0;i<a.size();i++){
            int k = a[i][0]+a[i][1];
            m=min(m,k);
        }
        return m;
    }
};