class Solution {
public:
    long long countSubarrays(vector<int>& a, int minK, int maxK) {
        int start =-1,end=0;
        int mini=-1,maxi=-1;
        long long ans=0;
        while(end<a.size()){
            if(a[end]>maxK||a[end]<minK){
                start = end;
            }
            if(a[end] == minK){
                mini=end;
            }
            if(a[end] == maxK){
                maxi = end;
            }
                ans+= max(0LL,(long long)(min(mini,maxi)-start));
            
            end++;

        }
        return ans;
    }
};