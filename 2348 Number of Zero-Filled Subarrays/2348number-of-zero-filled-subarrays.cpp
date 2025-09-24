class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long cnt = 0, a = 0;
        for (int num : nums) {
            a = (num == 0) ? a + 1 : 0;
            cnt += a;
        }
        return cnt;
    }
};