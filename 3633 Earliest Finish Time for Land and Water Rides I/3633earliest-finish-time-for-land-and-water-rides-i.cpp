class Solution {
public:
    int calFinishTime(vector<int>& ls, vector<int>& ld, vector<int>& ws, vector<int>& wd){
         int mini=INT_MAX;
        for( int i=0;i<ls.size();i++){
            mini = min( mini, ls[i]+ld[i]);
        }
        int ans = INT_MAX;
        for( int i =0;i<wd.size();i++){
            ans = min(ans, wd[i]+max(mini, ws[i]));
        }
        return ans;
    }
    int earliestFinishTime(vector<int>& ls, vector<int>& ld, vector<int>& ws, vector<int>& wd) {
       return min( calFinishTime(ls, ld, ws, wd), calFinishTime(ws, wd, ls, ld));
    }
};