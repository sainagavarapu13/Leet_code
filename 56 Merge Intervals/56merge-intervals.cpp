class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](const vector<int> &a,const vector<int> &b){return a[0]<b[0];});
        vector<vector<int>> v;
        int m = intervals.size();
        vector<int> me = intervals[0];
        for(int i=1;i<m;i++){
            cout<<intervals[i][0]<<" "<<me[1]<<endl;
            if(intervals[i][0]<=me[1]){
                me[1] = max(me[1],intervals[i][1]);
            }
            else{
                v.push_back(me);
                me = intervals[i];
            }
        }
        v.push_back(me);
        return v;
    }
};