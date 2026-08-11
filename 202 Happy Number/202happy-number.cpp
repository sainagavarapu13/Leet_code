class Solution {
public:
    long long natesh(long long n){
        long long sum = 0;
        while(n>0){
            int b = n%10;
            sum += b*b;
            n /=10;
        }
        return sum;
    }
    bool isHappy(int a) {
        unordered_set<long long> s;
        long long n = a;
        while(n!=1){
            if(n==1) return true;
            if(s.count(n)) return false;
            s.insert(n);
            n = natesh(n);
        }
        return true;
    }
};