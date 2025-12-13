class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int sell = 0,n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]){
                sell += nums[i]-nums[i-1];
            }
        }
        return sell;
    }
};