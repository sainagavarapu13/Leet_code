class Solution {
public:
    int maxSum(vector<int>& a, vector<int>& b) {
        int i=0,j=0;
        int mod = 1e9+7;
        long long sum1=0,sum2=0,ans=0;
        while(i<a.size()&&j<b.size()){
            if(a[i]<b[j]){
                sum1+=a[i];
                i++;
            }
            else if(a[i]>b[j]){
                sum2+=b[j];
                j++;
            }
            else{
                ans+=(max(sum1,sum2)+a[i])%mod;
                sum1=0;
                sum2=0;
                i++;
                j++;
            }
        }
        while(i<a.size()) {sum1+=a[i];i++;}
        while(j<b.size()){ sum2+=b[j]; j++;}
        ans+=(max(sum1,sum2))%mod;
        return ans%mod;
    }
};