class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size(),res = 0;
        vector<int> pref(n+1,0);
        for(int i=0;i<n;i++){
            pref[i+1] = pref[i]+nums[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if((pref[j+1]-pref[i])==goal) res++;
            }
        }
        return res;
    }
};