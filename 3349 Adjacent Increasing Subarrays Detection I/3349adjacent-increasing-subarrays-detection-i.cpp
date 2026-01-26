class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        if(k<=1) return true;
        int a =k-1;
        for(int i=k+1;i<nums.size();i++){
            if(nums[i]>nums[i-1] && nums[i-k]>nums[i-k-1]) a--;
            else a = k-1;
            if(a==0) return true;
        }
        return false;
    }
};