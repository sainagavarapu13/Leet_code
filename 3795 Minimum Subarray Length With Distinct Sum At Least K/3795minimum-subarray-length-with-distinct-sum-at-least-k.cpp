class Solution {
public:
    int minLength(vector<int>& nums, int k) {
         unordered_map<int,int> freq;
        int n = nums.size();
        int l = 0;
        long long distinctSum = 0;
        int ans = INT_MAX;

        for (int r = 0; r < n; r++) {
            freq[nums[r]]++;
            if (freq[nums[r]] == 1) {
                distinctSum += nums[r];
            }

            while (distinctSum >= k) {
                ans = min(ans, r - l + 1);
                freq[nums[l]]--;
                if (freq[nums[l]] == 0) {
                    distinctSum -= nums[l];
                }
                l++;
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};