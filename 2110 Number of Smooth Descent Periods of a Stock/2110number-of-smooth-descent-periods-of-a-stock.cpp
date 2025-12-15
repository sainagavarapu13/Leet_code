class Solution {
public:
    long long getDescentPeriods(vector<int>& a) {
        long long sum=0;
        long long cnt=0;
        for(int i=1;i<a.size();i++){
            if(a[i-1]-a[i]==1) cnt++;
            else cnt=0;
            sum+=cnt;
        }
        return sum+a.size();
    }
};