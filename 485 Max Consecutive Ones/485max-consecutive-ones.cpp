class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0,n = nums.size(),ans = 1;
        for(int i=0;i<n-1;i++){
            if(res==0 && nums[i]==1){
                res = 1;
            }
            if(nums[i]==1 && nums[i+1]==1){
                ans++;
            }
            else if(res>0){
                res = max(res,ans);
                ans = 1;
            }
        }
        if(res!=0) res = max(res,ans);
        if(res==0 && nums[n-1]==1){
                res = 1;
        }
            return res;
    }
};