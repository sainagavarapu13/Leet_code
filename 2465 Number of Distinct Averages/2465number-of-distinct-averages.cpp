class Solution {
public:
    int distinctAverages(vector<int>& a) {
        set<float> s;
        sort(a.begin(), a.end());
        int n = a.size();
        for (int i = 0; i < n/2; i++) {
            float avg = (a[i] + a[n-1-i]) / 2.0;
            s.insert(avg);
        }
        return s.size();
    }
};
