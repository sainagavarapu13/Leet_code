class Solution {
public:
    bool bin(int a) {
        if (a < 0) return false; 
        string s;
        while (a > 0) {
            s += char('0' + (a & 1));
            a >>= 1;
        }
        string r = s;
        reverse(r.begin(), r.end());
        return s == r;
    }

    vector<int> minOperations(vector<int>& nums) {
        vector<int> ans;

        for (int x : nums) {
            int d = 0;  

            while (true) {
                if (bin(x - d)) {   
                    ans.push_back(d);
                    break;
                }
                if (bin(x + d)) {   
                    ans.push_back(d);
                    break;
                }
                d++;
            }
        }

        return ans;
    }
};
