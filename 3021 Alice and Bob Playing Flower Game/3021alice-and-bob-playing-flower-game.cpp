class Solution {
public:
    long long flowerGame(int n, int m) {
        long long i,j,cnt=0;
        long long eve_n=(n/2);
        long long eve_m=(m/2);
    long long odd_n=(n/2)+(n%2);
    long long odd_m=(m/2)+(m%2);
    long long ans=(eve_n*odd_m)+(eve_m*odd_n);
       return ans;
    }
};