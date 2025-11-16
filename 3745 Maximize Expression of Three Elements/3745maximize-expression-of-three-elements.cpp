class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& a) {
        int sum=0,cnt=INT_MIN;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a.size();j++){
                for(int k=0;k<a.size();k++){
                    if(i==j||j==k) continue;
                    sum=a[i]+a[j]-a[k];
                    cnt=max(cnt,sum);
                }
            }
        }
        return cnt;
    }
};