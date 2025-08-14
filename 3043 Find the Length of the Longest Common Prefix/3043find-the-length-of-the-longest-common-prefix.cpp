class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string> x; 
        for (int n : arr1) {
            string s = to_string(n);
            for (int i = 1; i <= s.size(); i++) {
                x.insert(s.substr(0, i));
            }
        }
        int m = 0; 
        for (int y : arr2) {
            string s = to_string(y);
            int current = 0;
            for (int i = 1; i <= s.size(); i++) {
                if (x.count(s.substr(0, i))) {
                    current = i;
                } else {
                    break;
                }
            }
            m = max(m, current);
        }
        
        return m;
    }
};