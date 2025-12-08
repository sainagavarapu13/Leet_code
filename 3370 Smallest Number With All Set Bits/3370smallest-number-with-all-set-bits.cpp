class Solution {
public:
    int allset(int n){
       
        while(n){
           if(n%2==0) return 0;
            n=n/2;
        }
        return 1;
    }
    int smallestNumber(int n) {
        int k=n;
        while(1){
            if(allset(k)){
                return k;
            }
            k++;
        }
    }
};