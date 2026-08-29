class Solution {
public:
    int minBishopMoves(vector<int>& sc, vector<int>& t) {
        int a = sc[0],b = sc[1],c = t[0],d = t[1];
        if((a+b)%2 != (c+d)%2) return -1;
        if(a==c && b==d) return 0;
        if(abs(a-c)==abs(b-d)) return 1;
        return 2;
    }
};