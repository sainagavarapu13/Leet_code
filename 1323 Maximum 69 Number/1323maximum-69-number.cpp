class Solution {
public:
    int maximum69Number (int num) {
        int a=0,b=0,e=0;
        while(num){
            int c = num%10;
            e = e*10 + c;
            num = num/10;
        }
        num = e;
        while(num){
            int c = num%10;
            if(a==0 && c==6){
                a=1;
                c=9;
            }
            b = b*10+c;
            num /= 10;
        }
        return b;
    }
};