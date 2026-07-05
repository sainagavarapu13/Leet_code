class Solution {
public:
    int maxValidPairSum(vector<int>& a, int k) {
        int n=a.size();
        vector<int>maxi(n,0);
        int maximum =INT_MIN;
        maxi[n-1] = a[n-1];
        for(int i=a.size()-2;i>=0;i--){
            maxi[i]=max(maxi[i+1],a[i]);
        }
        int ans=INT_MIN;
       
        for(int i=0;i<n;i++){
            if(i+k<n){
                ans=max(ans,a[i]+maxi[i+k]);
            }
        }
        return ans;
    }
};