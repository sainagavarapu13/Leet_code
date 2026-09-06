class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        long long sum1=0,sum2=0,n = nums.size(),k = 0;
        long long j = n/2;
        int res = 0;
        for(int i=0;i<n;i++){
            if(i<j) sum1+= nums[i];
            else sum2 += nums[i];
        }
        for(int i=0;i<n;i++){
            if(sum1>sum2) res++;
            sum1 -= nums[k%n];
            sum1 += nums[j%n];
            sum2 -= nums[j%n];
            sum2 += nums[k%n];
            k++;
            j++;
        }
        return res;
    }
};