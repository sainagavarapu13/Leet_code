class Solution {
public:
    bool isDigitorialPermutation(int n) {
        if(n==0) return true;
        vector<long long> v;
        for(int i=0;i<=9;i++){
            if(i<=1){
                v.push_back(1);
                continue;
            }
            long long a = 1;
            for(int j=2;j<=i;j++){
                a *=j;
            }
            v.push_back(a);
        }
        long long o  = n;
        long long test = 0;
        vector<int> z(10),y(10);
        while(n>0){
            int b = n%10;
            z[b]++;
            test += v[b];
            n /=10;
        }
        while(test>0){
            int b = test%10;
            y[b]++;
            test /=10;
        }
        for(int i = 0;i<10;i++){
            if(y[i]!=z[i]) return false;
        }
        return true;
    }
};