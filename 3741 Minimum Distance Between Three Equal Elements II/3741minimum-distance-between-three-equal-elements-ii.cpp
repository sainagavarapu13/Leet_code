#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <cmath>
using namespace std;

class Solution {
public:
    int minimumDistance(vector<int>& a) {
        map<int, vector<int>> p;
        for (int i = 0; i < a.size(); i++) {
            p[a[i]].push_back(i);
        }

        int m = INT_MAX;  

       
        for (auto& [n, c] : p) {
            if (c.size() >= 3) {
               
                for (int i = 0; i < c.size() - 2; i++) {
                    int i1 = c[i];
                    int j1 = c[i+1];
                    int k1 = c[i+2];

                    
                    int dist = abs(i1 - j1) + abs(j1 - k1) + abs(k1 - i1);
                    m = min(m, dist);
                }
            }
        }

        return m == INT_MAX ? -1 : m;
    }
};

