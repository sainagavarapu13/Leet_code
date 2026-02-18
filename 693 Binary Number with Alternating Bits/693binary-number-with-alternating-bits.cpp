class Solution {
public:
    bool hasAlternatingBits(int n) {
        int i,p=-1;
        while(n){
            if(p==(n%2)) return 0;
            else{
                p=n%2;
            }
            n=n/2;
        }
        return 1;
    }
};