class Solution {
public:
    int maximumBeauty(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        int i=0,j=0;
        int ans=0;
        while(j<a.size()){
            while(a[j]-a[i] > 2*k){
                i++;
            }
         
            ans=max(ans,j-i+1);
               j++;
        }
        return ans;
    }
};