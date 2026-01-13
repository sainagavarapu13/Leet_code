class Solution {
public:
    long long maxProfit(vector<int>& a, vector<int>& b, int k) {
        long long ans = 0;
        long long sum = 0;
        vector<long long>prefContribution,sums;
        long long p = 0;
       for(int i=0;i<a.size();i++){
        prefContribution.push_back(ans);
        ans+=(long long)(a[i]*b[i]);
        sums.push_back(p);
    
        p+=a[i];
         
       }
       sums.push_back(p);
       prefContribution.push_back(ans);
       long long gain=0;
       for(int i=0;i+k<=a.size();i++){
        long long old = prefContribution[i+k]-prefContribution[i];
        long long New = sums[i+k]-sums[i+k/2];
        gain = max(gain,New-old);
       }
       return ans + gain;
    }
};