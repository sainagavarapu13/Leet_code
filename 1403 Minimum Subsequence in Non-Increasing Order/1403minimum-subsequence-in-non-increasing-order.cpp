class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long s = accumulate(nums.begin(),nums.end(),0);
        vector<int> ans;
        int su = 0;
        for(int j=nums.size()-1;j>=0;j--){
            if(s>=su){
                su +=nums[j];
                s -= nums[j];
                ans.push_back(nums[j]);
            }
        }
        return ans;
    }
};