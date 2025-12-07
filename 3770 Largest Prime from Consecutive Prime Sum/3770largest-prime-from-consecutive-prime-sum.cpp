class Solution {
public:
    bool fun(long long n){
        if (n <= 1) return false;
        if (n <= 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;

        for (long long i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }

    int largestPrime(int n) {
        long long sum = 0;
        int ans = 0;

        for (int i = 2; i <= n; i++) {
            if (fun(i)) {       
                if (sum + i > n) break;
                sum += i;

                if (fun(sum))   
                    ans = sum;
            }
        }
        return ans;
    }
};
