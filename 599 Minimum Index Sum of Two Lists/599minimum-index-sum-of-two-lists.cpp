class Solution {
public:
    vector<string> findRestaurant(vector<string>& a, vector<string>& b) {
        vector<pair<string, int>> c;
        int cnt = 0;
        for (auto& i : a) {
            c.push_back({i, cnt});
            cnt++;
        }

        int min_sum = INT_MAX;
        vector<string> res;
        int j = 0;  

        for (auto& k : b) {
            auto it = find_if(c.begin(), c.end(), 
                [&](const pair<string, int>& p) { return p.first == k; });
            
            if (it != c.end()) {
                int sum = it->second + j;
                if (sum < min_sum) {
                    min_sum = sum;
                    res.clear();
                    res.push_back(k);
                } 
                else if (sum == min_sum) {
                    res.push_back(k);
                }
            }
            j++; 
        }
        
        return res;
    }
};