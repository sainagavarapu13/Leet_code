class Solution {
public:
    bool isprime(long long n) {
        if (n <= 1) return false;
        for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    bool completePrime(int num) {

       
        if (num < 10) return isprime(num);

        string s = to_string(num);
        int n = s.size();

        
        for (int i = 1; i <= n; i++) {
            long long prefix = stoll(s.substr(0, i));
            if (!isprime(prefix)) return false;
        }

        
        for (int i = 0; i < n; i++) {
            long long suffix = stoll(s.substr(i));
            if (!isprime(suffix)) return false;
        }

        return true;
    }
};
