class Solution {
public:
    int countPrimeSetBits(int a, int b) {
        set<int>primes={2,3,5,7,11,13,17,19};
        int k=0,i;
        for(i=a;i<=b;i++){
            int cnt=__builtin_popcount(i);
            if(primes.count(cnt)) k++;
        }


        return k;
    }
};