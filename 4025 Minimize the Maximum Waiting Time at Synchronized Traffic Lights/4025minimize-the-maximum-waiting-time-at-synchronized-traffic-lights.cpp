class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int m = 0,res = 0;
        for(int i=0;i<lights.size();i++){
            m = max(m,lights[i]);
        }
        for(int i=0;i<arrivalTime.size();i++){
            int r = arrivalTime[i]%period;
            if(r>=m){
                res = max(res,period-r);
            }
        }
        return res;
    }
};