class Solution {
public:
    int minimumSum(int n) {
        vector<int>ans(4);
       for(int i=0;i<4;i++){
        ans[i]=n%10;
        n=n/10;
       }
       sort(ans.begin(),ans.end(),greater<>());
       return (ans[3]*10+ans[0])+( ans[2]*10+ans[1]);
    }
};