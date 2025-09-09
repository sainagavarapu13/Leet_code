class Solution {
public:
    int distanceTraveled(int a, int b) {
        int sum=0;
        while(a>=5&&b){
            sum+=(5)*10;
            a=a-5;
            a++;
            b--;
        }
        sum+=a*10;
        return sum;
    }
};