class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k==1) return 0;
        sort(nums.begin(),nums.end());
        int  n  = INT_MAX;
        for(int i=0;i+k<=nums.size();i++){
            int b = nums[i+k-1] - nums[i];
            if(b<n){
                n = b;
            }
        }
        return n;
    }
};