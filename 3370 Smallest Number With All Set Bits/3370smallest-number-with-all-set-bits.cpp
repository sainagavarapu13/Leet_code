class Solution {
public:
    int smallestNumber(int n) {
        int num = 0;
        while(num<n){
            num = num<<1;
            num++;
        }
        return num;
    }
};