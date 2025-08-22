class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n){
            if(n%3!=0&&n%3!=1) return 0;
            n=n/3;
        }
        return 1;
    }
};