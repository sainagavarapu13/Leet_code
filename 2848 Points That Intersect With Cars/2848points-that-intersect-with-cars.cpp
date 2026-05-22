class Solution {
public:
    int numberOfPoints(vector<vector<int>>& a) {
        sort(a.begin(),a.end());
        int e=0,ans=0;
        for(int i=0;i<a.size();i++){
            int start = max(e+1,a[i][0]);
            int end=a[i][1];
            if(start <= end) {
                ans += (end - start + 1);
            }

            e = max(e, end);
        }
        return ans;
    }
};