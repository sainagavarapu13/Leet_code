class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& a) {
        int cnt = 0;
        for(int i=0;i<a.size()-1;i++){
              if (a[i][0] == a[i+1][0]) {
                cnt += abs(a[i][1] - a[i+1][1]);
            }
            else if (a[i][1] == a[i+1][1]) {
                cnt += abs(a[i][0] - a[i+1][0]);
            }
            else {
                int dx = abs(a[i][0] - a[i+1][0]);
                int dy = abs(a[i][1] - a[i+1][1]);
                cnt += max(dx, dy);
            }
        }
        return cnt;
    }
};