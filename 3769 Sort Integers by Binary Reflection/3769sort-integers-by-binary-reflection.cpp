#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    int binaryReflection(int n) {
        int reflection = 0;
        while (n) {
            reflection = (reflection << 1) | (n % 2); 
            n /= 2;
        }
        return reflection;
    }

    vector<int> sortByReflection(vector<int>& nums) {
        vector<std::pair<int, int>> reflections;

        for (int num : nums) {
            reflections.push_back({binaryReflection(num), num});
        }

        
       sort(reflections.begin(), reflections.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.first == b.first) {
                return a.second < b.second;  
            }
            return a.first < b.first;  
        });

        vector<int> result;
        for (const auto& p : reflections) {
            result.push_back(p.second);
        }

        return result;
    }
};
