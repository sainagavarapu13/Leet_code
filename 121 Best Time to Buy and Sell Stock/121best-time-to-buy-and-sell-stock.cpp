class Solution {
public:
    int maxProfit(vector<int>& a) {
        int i,mini=INT_MAX,maxi=0;
        for(i=0;i<a.size();i++){
            mini=min(mini,a[i]);
            maxi=max(maxi,a[i]-mini);
        }
        return maxi;
    }
};