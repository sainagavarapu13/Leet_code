#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& n) {
        vector<string> a;
        if (n.empty()) return a;
        
        int start = n[0];
        
        for (int i = 1; i < n.size(); i++) {
            if (n[i] != n[i-1] + 1) {
                if (start == n[i-1]) {
                    a.push_back(to_string(start));
                } else {
                    a.push_back(to_string(start) + "->" + to_string(n[i-1]));
                }
                start = n[i];
            }
        }
        if (start == n.back()) {
            a.push_back(to_string(start));
        } else {
            a.push_back(to_string(start) + "->" + to_string(n.back()));
        }
        
        return a;
    }
};