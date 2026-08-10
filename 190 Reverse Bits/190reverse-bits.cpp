class Solution {
public:
    int reverseBits(int n) {
      int a[32]={0};
      int k =0;
        while(n){
            a[k++]=(n%2);
            n/=2;
        }

        long long num =0,ind =1;
        for( int i=31;i>=0;i--){
            printf("%d",a[i]);
            num+=a[i]*ind;
            ind*=2;
        }
        return num;
    }
};