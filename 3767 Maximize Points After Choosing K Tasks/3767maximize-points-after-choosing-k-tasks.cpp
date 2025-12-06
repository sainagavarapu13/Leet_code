class Solution {
public:
    long long maxPoints(vector<int>& t1, vector<int>& t2, int k) {
        int n = t1.size();
        vector<long long> gain;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += t2[i];                    
            gain.push_back(t1[i] - t2[i]);   
        }

        sort(gain.begin(), gain.end(), greater<long long>());
        for (int i = 0; i < k; i++) {
            sum += gain[i];
        }
        for (int i = k; i < n; i++) {
            if (gain[i] > 0) sum += gain[i];
        }

        return sum;
    }
};
