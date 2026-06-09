class Solution {
public:
    long long maxTotalValue(vector<int>& a, int k) {
        long long maxi=INT_MIN;
        long long mini=INT_MAX;
        for(int i=0;i<a.size();i++){
            if(a[i]>maxi) maxi=a[i];
            if(mini>a[i]) mini=a[i];
           
        }
        return (maxi-mini)*k;
    }
};