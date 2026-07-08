
class Solution {
public:
    int minArrivalsToDiscard(vector<int>& arrivals, int w, int m) {
        int n = arrivals.size();
        unordered_map<int, deque<int>> x;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int item = arrivals[i];
            while (!x[item].empty() && x[item].front() <= i - w) {
                x[item].pop_front();
            }
            if (x[item].size() < m) {
                x[item].push_back(i);
            } else {
                cnt++;
            }
        }
        
        return cnt;
    }
};