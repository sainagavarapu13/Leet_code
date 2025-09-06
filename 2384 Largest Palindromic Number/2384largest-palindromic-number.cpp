
class Solution {
public:
    string largestPalindromic(string num) {
        vector<int> freq(10, 0);
        for (char c : num) freq[c - '0']++;

        int n = num.size();
        string res(n, 'x');   
        int l = 0, r = n - 1;

        
        for (int i = 9; i >= 0; i--) {
            while (freq[i] >= 2) {
                
                if (i == 0 && l == 0) break;
                res[l] = res[r] = char('0' + i);
                l++; r--;
                freq[i] -= 2;
            }
        }

        
        for (int i = 9; i >= 0; i--) {
            if (freq[i] > 0) {
                res[n / 2] = char('0' + i);
                break;
            }
        }

        
        string ans;
        for (char c : res) {
            if (c != 'x') ans.push_back(c);
        }

        
        if (ans.empty()) return "0";

        return ans;
    }
};