class Solution {
public:
    long long maximumHappinessSum(vector<int>& a, int k) {
        sort(a.begin(),a.end(),greater<>());
        long long p=0,i=0,sum=0;
        while(i<k){
            if(a[i]-p>0)
            sum+=a[i]-p;
            i++;
            p++;
        }
        return sum;
    }
};