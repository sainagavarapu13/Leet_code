class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0,p,num=0;
        while(n){
            int k=n%10;
            if(k!=0){
                num=num*10+k;
            }
            n=n/10;
        }
        cout<<num<<"\n";
        long long m=0;
        while(num){
            m=m*10+(num%10);
            sum+=(num%10);
            num=num/10;
            
        }
        return sum*m;
        
    }
};