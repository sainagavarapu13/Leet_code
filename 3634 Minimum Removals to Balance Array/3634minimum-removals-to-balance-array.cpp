class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        if(nums.size()==1) return 0;
        sort(nums.begin(),nums.end());
        int n =nums.size();
        long long res = 0,l=0;
        for(int i=0;i<n;i++){
            long long s = 1ll*nums[i]*k;
            while(l<=n-1 &&s>=nums[l]){
                l++;
            }
            res= max(res,abs(l-i));
        }
        return n - res;
    }
};