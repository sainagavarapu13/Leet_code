class Solution {
public:
    int kItemsWithMaximumSum(int a, int b, int c, int k) {
        int sum=0;
        while(k&&a){
            sum++;
            k--;
            a--;
        }
        while(k&&b){
            k--;
            b--;
        }
         while(k&&c){
            sum--;
            k--;
            c--;
        }
        return sum;
    }
};