class Solution {
public:
    int totalMoney(int n) {
        int a = n/7,b = n%7,sum = 0;
        for(int i=0;i<a;i++){
            sum += 7*(4+i);
        }
        for(int j=0;j<b;j++){
            sum += a+j+1;
        }
        return sum;
    }
};