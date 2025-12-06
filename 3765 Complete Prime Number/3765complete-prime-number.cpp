class Solution {
public:
    bool prime(int n){
        if(n<=1) return 0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return 0;
        }
        return 1;
    }
    bool completePrime(int num) {
        if(num<=9){
            return prime(num);
        }
        if(!prime(num)){
            return 0;
        }
        vector<int> v;
        int dig = log10(num);
        while(dig>0){
            int b = pow(10,dig);
            v.push_back(num%b);
            v.push_back(num/b);
            dig--;
        }
        for(int i=0;i<v.size()-1;i = i+2){
            // cout<<v[i]<<"  "<<v[i+1]<<endl;
            if(prime(v[i]) && prime(v[i+1])){
                continue;
            }
            else{
                return 0;
            }
        }
        return 1;
    }
};