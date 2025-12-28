class Solution {
public:
    long long maximumScore(vector<int>& a) {
        int n = a.size();
        vector<long long> right_min(n, LLONG_MAX);
        right_min[n - 1] = LLONG_MAX;  
        for (int i = n - 2; i >= 0; --i) {
            right_min[i] = min((long long)a[i + 1], right_min[i + 1]);
        }

        long long left_sum = 0, max_score = LLONG_MIN;
        for (int i = 0; i < n - 1; i++) {
            left_sum += a[i]; 
            max_score = max(max_score, left_sum - right_min[i]); 
        }

        return max_score;
    }
};
