class Solution {
public:
    long long maximumTotalSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long res = 0;
        for(int i=nums.size()-2;i>=0;i--){
            // cout<<"--"<<nums[i+1]<<" "<<nums[i]<<endl;
            if(nums[i+1]==nums[i]){
                nums[i]--;
            }
            if(nums[i+1]<nums[i]){
                nums[i] = nums[i+1]-1;
            }
            res += nums[i+1];
            // cout<<nums[i+1]<<" "<<nums[i]<<endl;
        }
        if(nums[0]<=0) return -1;
        res += nums[0];
        return res;
    }
};