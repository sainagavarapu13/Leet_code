class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int i,j,cnt=0;
        for(i=0;i<hours.size();i++){
            for(j=i+1;j<hours.size();j++){
                if((hours[i]+hours[j])%24==0) cnt++;
            }
        }
        return cnt;
    }
};