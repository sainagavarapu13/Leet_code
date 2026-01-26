class Solution {
public:
    vector<int> evenOddBit(int n) {
        int a=0,even=0,odd=0;
        while(n>0){
            if(a%2==0 && n%2==1) even++;
            else if(a%2!=0 && n%2==1) odd++;
            n /=2;
            a++;
        }
        return{even,odd};
    }
};