class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return -1;
        vector<long long> suffixProd(n + 1, 1);
        for (int i = n - 1; i >= 0; i--) {
          
            if (nums[i] == 0) {
                suffixProd[i] = 0;
            } else {
                long long next = suffixProd[i + 1];
                if (next > 2e14 / nums[i]) { 
                    suffixProd[i] = 2e14; 
                } else {
                    suffixProd[i] = next * nums[i];
                }
            }
        }

        long long leftSum = 0;
        for (int i = 0; i < n; i++) {
            long long rightProd = suffixProd[i + 1];
            if (leftSum == rightProd) {
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};
