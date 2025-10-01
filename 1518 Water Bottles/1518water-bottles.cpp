class Solution {
public:
    int numWaterBottles(int a, int b) {
        int tot=a,t;
        int rem=0;
        // if(a>b) return a;
        // if(a==b) return a+1;
        while(a+rem>=b){
            t=((a+rem)/b);
            rem=((a+rem)%b);
            tot+=t;
            a=t;
        }
        return tot;
    }
};