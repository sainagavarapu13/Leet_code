class Solution {
public:
    int minimumDifference(vector<int>& a, int k) {
        int start=0,end=k-1;
        sort(a.begin(),a.end());
        int ans=INT_MAX;
        while(end<a.size()){
            int maxi=INT_MIN;
            int mini = INT_MAX;
            for(int i=start;i<=end;i++){
                maxi=max(maxi,a[i]);
                mini=min(mini,a[i]);
            }
            ans=min(ans,maxi-mini);
            start++;
            end++;
        }
        return ans;
    }
};