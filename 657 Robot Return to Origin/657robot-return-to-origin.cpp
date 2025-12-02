class Solution {
public:
    bool judgeCircle(string a) {
        int x=0,y=0;
        for( char i : a){
            if( i == 'U') x+=1;
            else if ( i =='D') x-=1;
            else if( i =='R') y+=1;
            else if( i=='L') y-=1;
        }
        if( x==0 && y ==0) return 1;
        else return 0;
    }
};