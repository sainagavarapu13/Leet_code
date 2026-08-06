class Solution {
public:
    int pro(int n){
         int p=1;
        while(n){
            p=p*(n%10);
            n/=10;
        }
        return p;
    }
    int smallestNumber(int n, int t) {
       
        while(1){
            if(pro(n)%t==0) return n;
            n++;
        }
        return 1;
    }
};