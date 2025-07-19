#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int generateKey(int a, int b, int c) {
        vector<int> n1;
        vector<int> n2;
        vector<int> n3;
        int k = 4;
        while (k--) {
            n1.push_back(a % 10);
            n2.push_back(b % 10);
            n3.push_back(c % 10);
            a /= 10;
            b /= 10;
            c /= 10;
        }
        int key = 0;
        for (int i = n1.size() - 1; i >= 0; i--) {
            int min_digit = min(n1[i], min(n2[i], n3[i]));
            key = key * 10 + min_digit;
        }
        return key;
    }
};