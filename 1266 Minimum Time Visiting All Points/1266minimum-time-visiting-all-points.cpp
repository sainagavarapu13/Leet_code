class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& a) {
        int sum=0;
        for( int i=0;i<a.size()-1;i++){
            sum+=max(abs(a[i+1][0]-a[i][0]),abs(a[i+1][1]-a[i][1]));
        }
        return sum;
    }
};