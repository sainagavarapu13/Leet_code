class Solution {
public:
    int climbStairs(int n) {
       vector<int>a(n+2,0);
       a[0]=0;
       a[1]=1;
       int i;
       
       for(i=2;i<=n+1;i++){
        a[i]=a[i-1]+a[i-2];
       }
       return a.back();
    }
};