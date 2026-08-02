class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n = nums.size();
        vector<int> o(n+1),e(n+1);
        for(int i=1;i<=n;i++){
            o[i] = o[i-1]+ (nums[i-1]%2!=0 ? 1 : 0);
            e[i] = e[i-1]+ (nums[i-1]%2==0 ? 1 : 0);
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                long long y = o[j+1]-o[i];
                long long x = e[j+1]-e[i];
                if(y<=0) continue;
                if(1LL*x*b <= 1LL*a*y) ans++;
                // cout<<i<<" "<<j<<" "<<ans<<endl;
            }
        }
        return ans;
    }
};