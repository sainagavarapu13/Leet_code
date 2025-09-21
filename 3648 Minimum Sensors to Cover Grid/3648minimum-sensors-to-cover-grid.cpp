class Solution {
public:
    int minSensors(int n, int m, int k) {
        int a = 2*k+1;
        int b = ceil((n+a-1)/a);
        int c  = ceil((m+a-1)/a);
        return b*c;
    }
};