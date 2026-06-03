class Solution {
public:
    int check(vector<int>& ls, vector<int>& ld, vector<int>& ws, vector<int>& wd){
        int ans=INT_MAX,an=INT_MAX;
        for(int i=0;i<ls.size();i++){
            ans=min(ans,ls[i]+ld[i]);
        }
        for(int i=0;i<ws.size();i++){
            an=min(an,max(ws[i],ans)+wd[i]);
        }
        return an;
    }
    int earliestFinishTime(vector<int>& ls, vector<int>& ld, vector<int>& ws, vector<int>& wd) {
     return min(check(ls,ld,ws,wd),check(ws,wd,ls,ld));   
    }
};