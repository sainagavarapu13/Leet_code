class Solution {
public:
    int largestInteger(int num) {
        if (num == 0) return 0;
        
        int temp = num;
        int k = 0;
        while (temp > 0) {
            k++;
            temp /= 10;
        }
        vector<int> eve;
        vector<int> odd;
        temp = num;
        for (int i = 0; i < k; i++) {
            int digit = temp / (int)pow(10, k-1-i) % 10;
            if (digit % 2 == 1) {
                odd.push_back(digit);
            } else {
                eve.push_back(digit);
            }
        }
        sort(eve.begin(), eve.end(), greater<int>());
        sort(odd.begin(), odd.end(), greater<int>());
        
        int result = 0;
        temp = num;
        int e = 0, o = 0;
        for (int i = 0; i < k; i++) {
            int digit = temp / (int)pow(10, k-1-i) % 10;
            if (digit % 2 == 1) {
                result = result * 10 + odd[o++];
            } else {
                result = result * 10 + eve[e++];
            }
        }
        
        return result;
    }
};