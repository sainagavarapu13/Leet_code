class Solution {
public:
    int countDays(int days, vector<vector<int>>& m) {
        sort(m.begin(),m.end());
        int t=0,s=m[0][0],e=m[0][1];
        for(int i=0;i<m.size();i++){
            if(m[i][0]<=e){
                e = max(e,m[i][1]);
            }
            else{
                t += e-s+1;
                s = m[i][0];
                e = m[i][1];
            }
        }
        t +=e-s+1;
        return days-t;
    }
};