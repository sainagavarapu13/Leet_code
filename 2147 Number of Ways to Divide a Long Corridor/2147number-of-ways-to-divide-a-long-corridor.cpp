class Solution {
public:
    int numberOfWays(string co) {
        int m = 1000000007,n=co.size(),a=0,c=0;
        long long b=1;
        for(int i=0;i<n;i++){
            if(co[i]=='S'){
                a++;
                if(a>2 && a%2!=0){
                    b = (b*(c+1))%m;
                }
                c = 0;
            }
            else if(a%2==0 && a>0){
                c++;
            }
            }
            int d = b;
        if(a%2!=0 || a<2) return 0;
        return d;
    }
};