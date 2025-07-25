#include <string>
using namespace std;

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int len = s.length();
        int count = 0;
        
        for (int i = 0; i <= len - k; i++) {
            string sub = s.substr(i, k);
            int n = stoi(sub);
            if (n != 0 && num % n == 0) {
                count++;
            }
        }
        
        return count;
    }
};