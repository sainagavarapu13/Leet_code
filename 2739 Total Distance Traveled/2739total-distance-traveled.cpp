class Solution {
public:
    int distanceTraveled(int m, int a) {
       int d = 0;
       while(m>=5){
        m -= 5;
        d +=50;
        if(a>0){
            m +=1;
            a -=1;
        }
       }
       d +=m*10;
       return d;
    }
};