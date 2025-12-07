class Solution {
public:
    int fun(int x){
        string s;
        while (x) {
            s += ((x & 1) + '0'); 
            x >>= 1;
        }

        int result = 0;
        for (char c : s) {
            result = (result << 1) + (c - '0');
        }
        return result;
    }

    vector<int> sortByReflection(vector<int>& nums) {
        vector<pair<int, int>> a;
        for (int i : nums) {
            a.push_back({fun(i), i});
        }

        sort(a.begin(), a.end(), [](auto &x, auto &y) {
            if (x.first == y.first) return x.second < y.second; 
    return x.first < y.first; 
        });

        vector<int> res;
        for (auto &[x, y] : a) {
            res.push_back(y);
        }
        return res;
    }
};
