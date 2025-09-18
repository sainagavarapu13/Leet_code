class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int  n = nums.size();
        long long sum = accumulate(nums.begin(),nums.end(),0LL);
        long long p = 0;
        int count =0;
        for(int i=0;i<n-1;i++){
            p += nums[i];
            if(p>=(sum-p)) count++;
        }
        return count;
    }
};