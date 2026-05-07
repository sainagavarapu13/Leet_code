class Solution {
public:
    vector<bool> isprime(int n){
        vector<bool>primes(1001,true);
        primes[0]=false;
        primes[1]=false;
        for(int i=2;i<=n;i++){
            if(primes[i]){
                for(int j=i*i;j<=n;j=j+i){
                    primes[j]=false;
                }
            }
        }
        return primes;
    }
    int rev(int n){
        int b=0;
        while(n){
            b=b*10+(n%10);
            n/=10;

        }
        return b;
    }
    int sumOfPrimesInRange(int n) {
        int sum=0;
        int num1 = n;
        int num2 = rev(n);
        if(num1>num2){
            swap(num1,num2);
        }
        vector<bool>p = isprime(num2);
        for(int i=num1;i<=num2;i++){
            if(p[i]){
                sum+=i;
            }
        }
        return sum;
    }
};