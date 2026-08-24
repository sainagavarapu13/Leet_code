class Solution {
public:
    int reverseBits(int n) {
       int a[32]={0};
       int k=0;
        while(n){
           a[k++]=n%2;
            n=n/2;
        }
      
        long long i;
        long long idx=1,sum=0;
        for(i=31;i>=0;i--){
            sum=sum+(idx*a[i]);
            idx=2*idx;
        }
        return sum;
    }
};