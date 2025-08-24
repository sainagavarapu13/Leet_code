class Solution {
public:
    int longestSubarray(vector<int>& n) {
        vector<int> a;
        int cnt = 0;
        for (int i = 0; i < n.size(); i++) {
            if (n[i] == 1) {
                cnt++;
            } else {
                if (cnt > 0) {
                    a.push_back(cnt);
                }
                a.push_back(-1);
                cnt = 0;
            }
        }
        if (cnt > 0) {
            a.push_back(cnt);
        }
        if (a.empty()) {
            return 0;
        }
        
        if (a.size() == 1) {
            return a[0] == -1? 0:a[0]-1;
        }
        
        int maxi = INT_MIN;
        
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != -1) {
                maxi = max(maxi,a[i]);
            }
            if (i>=2 && a[i]!= -1 && a[i-1] == -1 && a[i-2] != -1) {
                maxi = max(maxi, a[i-2] + a[i]);
            }
        }
        
        if( maxi != INT_MIN) return maxi;
        else return 0;
    }
};