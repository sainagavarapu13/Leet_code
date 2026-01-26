class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> best(n, 1e9);

        int s = 0, sum = 0;
        int minLen = 1e9, ans = 1e9;

        for (int e=0;e<n;e++) {
            sum += arr[e];

            while (sum > target) {
                sum -= arr[s++];
            }

            if (sum == target) {
                int len = e-s+1;

                if (s>0 && best[s-1]!=1e9) {
                    ans = min(ans, len + best[s - 1]);
                }

                minLen = min(minLen, len);
            }

            best[e] = minLen;
        }

        return ans == 1e9 ? -1 : ans;
    }
};
