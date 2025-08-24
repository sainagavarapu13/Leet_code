class Solution {
public:
    int gcd(int a,int b){
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
    int gcdOfOddEvenSums(int n) {
        int i,eve=0,odd=0;
        for(i=1;i<=2*n;i++){
            if(i%2==0) eve+=i;
            else odd+=i;
        }
        cout<<eve<<odd;
        return gcd(eve,odd);
    }
};