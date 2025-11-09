#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <cmath>
using namespace std;

class Solution {
public:
    int minimumDistance(vector<int>& a) {
        // Step 1: Create a map where the key is the number and the value is the list of indices
        map<int, vector<int>> p;
        for (int i = 0; i < a.size(); i++) {
            p[a[i]].push_back(i);
        }

        int m = INT_MAX; 

        for (auto& [n, c] : p) {
            if (c.size() >= 3) { 
                for (int i = 0; i < c.size() - 2; i++) {
                    for (int j = i + 1; j < c.size() - 1; j++) {
                        for (int k = j + 1; k < c.size(); k++) {
                            int i1 = c[i];
                            int j1 = c[j];
                            int k1 = c[k];

                            
                            int dist = abs(i1 - j1) + abs(j1 - k1) + abs(k1 - i1);
                            m = min(m, dist); 
                        }
                    }
                }
            }
        }

        // Step 3: If no valid triplet was found, return -1
        return m == INT_MAX ? -1 : m;
    }
};


