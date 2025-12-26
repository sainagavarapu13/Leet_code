class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        int p = 0, minPenalty = 0, bestHour = 0;
        for (int i = 0; i < n; i++) {
            if (customers[i] == 'Y') {
                p--;
            } else {
                p++;
            }
            if (p < minPenalty) {
                minPenalty = p;
                bestHour = i + 1;
            }
        }
        return bestHour;
    }
};