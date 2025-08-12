class Solution {
public:
    int getMaximumGenerated(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        
        vector<int> a(n+2); 
        a[0] = 0;
        a[1] = 1;
        int maxs = 1;  
        
        for (int i = 1; i <= n/2; i++) {
            a[2*i] = a[i];
            maxs = max(maxs, a[2*i]);
            if (2*i+1 <= n) { 
                a[2*i+1] = a[i] + a[i+1];
                maxs = max(maxs, a[2*i+1]);
            }
        }
        
        return maxs;
    }
};