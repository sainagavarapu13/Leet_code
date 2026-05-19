class Solution {
public:
    int maxProfit(vector<int>& a) {
        int ans=0;
        for(int i=1;i<a.size();i++){
            if(a[i]>a[i-1]){
                ans+=abs(a[i]-a[i-1]);
            }

        }
        return ans;
    }
};