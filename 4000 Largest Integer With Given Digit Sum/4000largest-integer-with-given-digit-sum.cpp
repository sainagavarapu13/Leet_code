class Solution {
public:
    int largestInteger(int n, int s) {
        int a = n*9,b = 0,c = 10;
        if(s>a) return -1;
        while(s>0){
            if(s>=9){
                b = b*c+9;
                n--;
                s -= 9;
            }
            else{
                b= b*c + s;
                n--;
                break;
            }
        }
        while(n>0){
            b = b*c;
            n--;
        }
        return b;
    }
};