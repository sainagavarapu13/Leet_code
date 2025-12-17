class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long cnt=0,sum = 0,l=0;
        for(int r=0;r<nums.size();r++){
            sum +=nums[r];
            while((r-l+1)*sum>=k) sum -= nums[l++];
            cnt += (r-l+1);
            //cout<<cnt<<" "<<r<<" "<<l<<" "<<sum<<endl;
        }
        return cnt;
    }
};