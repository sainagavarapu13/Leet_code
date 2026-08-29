class Solution {
public:
    int minBishopMoves(vector<int>& a, vector<int>& b) {
        if(a[0]==b[0]&&a[1]==b[1]) return 0;
        if(abs(a[0]-b[0]) == abs(a[1]-b[1])) return 1;
        if((a[0]+a[1])%2!=(b[0]+b[1])%2) return -1;
        return 2;
    }
};