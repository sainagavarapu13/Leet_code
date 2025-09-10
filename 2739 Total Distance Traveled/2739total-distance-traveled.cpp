class Solution {
public:
    int distanceTraveled(int a, int b) {
        int total =0;
        if( a <5) return a*10;
        while(b>0 && a>=5){
             a-=5;
             total += 50;
               // total+=10;
                a++;
                b--;
             
        }
        total+=a*10;
        return total;
    }
};