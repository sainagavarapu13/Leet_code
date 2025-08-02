class Solution {
public:
    int mostFrequentEven(vector<int>& n) {
        map<int, int> a;
        for(int i:n) {
            if(i % 2 == 0) {
                a[i]++;
            }
        }
        
        if(a.empty()) {
            return -1;
        }
        
        vector<pair<int, int>> b(a.begin(), a.end());
        sort(b.begin(), b.end(), [](auto& x, auto& y) {
            if(x.second == y.second) return x.first < y.first;
            else return x.second > y.second;
        });
        
        return b[0].first;
    }
};