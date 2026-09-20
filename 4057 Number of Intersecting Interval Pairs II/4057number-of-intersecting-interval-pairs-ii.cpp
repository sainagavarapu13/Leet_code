class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        vector<int> start,end;
        for(int i=0;i<intervals.size();i++){
            start.push_back(intervals[i][0]);
            end.push_back(intervals[i][1]);
        }
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        long long res = 0;
        for(int i=0;i<start.size();i++){
            auto a = lower_bound(end.begin(),end.end(),start[i]) - end.begin();
            res += i - a;
        }
        return res;
    }
};