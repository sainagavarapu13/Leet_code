class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n = nums.size();
        // cout<<endl;
        vector<int> suff(n);
        int mini = INT_MAX;
        for(int i=n-2;i>=0;i--){
            mini = min(mini,nums[i+1]);
            suff[i] = mini;
            // cout<<suff[i]<<" ";
        }
        // cout<<endl;
        long long res = INT_MIN,pre_sum=0;
        for(int i=0;i<n-1;i++){
            pre_sum +=nums[i];
            long long b = pre_sum-suff[i];
            // cout<<pref[i+1]<<" "<<suff[i]<<endl;
            if(b>res){
                res = b;
            }
        }
        return res;
    }
};