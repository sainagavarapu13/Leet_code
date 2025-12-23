class Solution {
public:
    string winningPlayer(int x, int y) {
        int val = min( x , y/4);
        if( val%2==0) return  "Bob";
        else return "Alice";
        
    }
};