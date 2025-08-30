class Solution {
public:
    int partitionString(string s) {
        int count = 1; 
        unordered_set<char> a;
        
        for (char c : s) {
            if (a.find(c) != a.end()) {
                count++;
                a.clear(); 
            }
            a.insert(c);
        }
        
        return count;
    }
};