class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size(),t = count(nums.begin(),nums.end(),0),c = 0;
        for(int i = n - t;i<n;i++){
            if(nums[i]==0) c++;
        }
        return t - c;
    }
};