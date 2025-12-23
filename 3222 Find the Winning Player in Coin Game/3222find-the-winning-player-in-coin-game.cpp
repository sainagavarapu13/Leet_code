class Solution {
public:
    string winningPlayer(int x, int y) {
        int cnt=0;
        while(x>=1&&y>=4){
            x--;
            y=y-4;
            cnt++;
        }
        
        if(cnt%2!=0) return "Alice";
        else return "Bob";
    }
};