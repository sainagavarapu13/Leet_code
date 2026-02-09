class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int res= 0,n = nums.size();
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if((nums[i]^nums[j])>0){
                    res += __builtin_popcount(nums[i]^nums[j]);
                }
            }
        }
        return res;
    }
};