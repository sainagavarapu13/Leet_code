class Solution {
public:
    int minBishopMoves(vector<int>& s, vector<int>& t) {
        int a = s[0];
        int b = s[1];
        int x = t[0] , y = t[1];
        if( x==a && y == b) return 0;
        else if((x+y)%2!=(a+b)%2) return -1;
        else if( abs(x-a)== abs(b-y)) return 1;
        return 2;
    }
};