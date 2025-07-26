#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        map<int, int> freq;
        for (int n : nums) {
            freq[n]++;
        }
        for (const auto& p : freq) {
            if (isPrime(p.second)) {
                 return true;
            }
        }
        return false;
    }

private:
    bool isPrime(int k) {
        if (k <= 1) {
            return false;
        }
        if (k == 2) {
            return true;
        }
        if (k % 2 == 0) {
            return false;
        }
        for (int i = 3; i * i <= k; i += 2) {
            if (k % i == 0) {
                return false;
            }
        }
        return true;
    }
};