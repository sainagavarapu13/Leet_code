#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // Sort the greed factors and cookie sizes
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0, j = 0, cnt = 0;
        
        // Loop through the children and cookies
        while (i < g.size() && j < s.size()) {
            // If the current cookie can satisfy the current child
            if (g[i] <= s[j]) {
                cnt++;  // Increase the count of content children
                i++;    // Move to the next child
            }
            // In either case, move to the next cookie
            j++;
        }

        return cnt;  // Return the number of content children
    }
};
