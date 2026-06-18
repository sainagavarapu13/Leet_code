class Solution {
public:
    bool reachingPoints(int a, int b, int x, int y) {
        while( x> a && y > b){
            if( x>y){
                x%=y;
            }else {
                y%=x;
            }
        }
        if( x ==  a && y == b) return true;
        if( a == x){
            return (y>=b) && ( abs( b-y)%a==0) ;
        }
        if( b == y){
            return (x>=a) && abs( x-a)%b==0;
        }
        return false;
        
    }
};