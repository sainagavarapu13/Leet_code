class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) return 1; 
        vector<int> bi;
        int temp = n;
        while (temp) {
            bi.push_back(temp % 2);
            temp /= 2;
        }
        for (int i = 0; i < bi.size(); i++) {
            bi[i] = (bi[i] == 0) ? 1 : 0; 
        }
        int decimal = 0;
        for (int i = 0; i < bi.size(); i++) {
            decimal += bi[i] * (1 << i); 
        }
        return decimal;
    }
};