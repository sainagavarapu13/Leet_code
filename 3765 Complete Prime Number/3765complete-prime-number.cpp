class Solution {
public:
    bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}
    bool completePrime(int n) {
       string s = to_string(n);
    for (int i = 1; i <= s.size(); i++) {
        long long pre = stoll(s.substr(0, i));
        if (!isPrime(pre))
            return false;
    }
    for (int i = 0; i < s.size(); i++) {
        long long suf = stoll(s.substr(i));
        if (!isPrime(suf))
            return false;
    }

    return true;
        
    }
};