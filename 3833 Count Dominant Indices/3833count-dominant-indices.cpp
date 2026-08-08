class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[n - 1];
        int cnt = 0;
        for (int i=n-2;i>=0;i--) {
            double avg=(double)sum/(n-i-1);
            if (nums[i] > avg)
                cnt++;
            sum+=nums[i];
        }
        return cnt;
    }
};