class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int n = nums.size();
        int c = -1;
        for (int i = 0; i + 1 < n; ++i) {
            if (nums[i+1] == nums[i] + 1) {
                int a = 2;
                int j = i + 1;
                while (j + 1 < n && nums[j+1] == nums[j-1]) {
                    ++a;
                    ++j;
                }
                c = max(c, a);
            }
        }
        return c;
    }
};
