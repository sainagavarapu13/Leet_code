class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        n-=1;
        long long ans = 1LL*s;
        int one = n/2;
        int add = n-one;
        ans+=(1LL*m*add);
        ans-=max(0,add-1);
        long long ans2 = 1LL*s;
        ans2+=1LL*one*(m-1);
      return max(ans,ans2);
    }
};