class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int res = 0,n = intervals.size();
        for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if(intervals[j][0] <= intervals[i][1] && intervals[i][0]<=intervals[j][1]){
                    res++;
                }
            }
        }
        return res;
    }
};