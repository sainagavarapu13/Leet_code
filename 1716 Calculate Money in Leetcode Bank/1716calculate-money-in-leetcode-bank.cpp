class Solution {
public:
    int days(int n){
        int sum=0,k=0;
        while(n--){
            sum+=(28+(7*k));
            k++;
        }
        return sum;
    }
    int totalMoney(int n) {
        int weeks=n/7;
        int d=days(weeks);
        int rem=n%7;
        d+=(((rem)*(rem+1))/2)+(rem*weeks);
        return d;
    }
};