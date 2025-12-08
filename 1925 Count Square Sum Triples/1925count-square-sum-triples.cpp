class Solution {
public:
    int countTriples(int n) {
        if(n<3) return 0;
        int a=0;;
        for(int i=1;i<=n;i++){
            for(int j=2;j<=n;j++){
                if(i==j && j<n){
                    j++;
                }
                for(int k=3;k<=n;k++){
                    if((j==k || i==k) && k<n){
                        k++;
                    }
                    if(((i*i)+(j*j))==(k*k)){
                        a++;
                    }
                }
            }
        }
        return a;
    }
};