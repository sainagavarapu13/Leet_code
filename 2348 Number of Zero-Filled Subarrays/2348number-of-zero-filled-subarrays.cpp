class Solution {
public:
    long long zeroFilledSubarray(vector<int>& a) {
        long long sum=0;
        long long cnt=0;
        for(int i=0;i<a.size();i++){
            if(a[i]==0){
                cnt++;
                sum+=cnt;
            }
            else {
                cnt=0;
            }
        }
        return sum;
    }
};