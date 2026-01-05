class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n = nums.size(),sum=0,a=0;
        vector<int> pr(n+1,0);
        long long s = 0;
        pr[0] = 0;
        for(int i=0;i<n;i++){
            pr[i+1] = pr[i]+nums[i];
        }
        while(a<n){
            int st = max(0,a-nums[a]);
            sum += pr[a+1]-pr[st];
            a++;
        }
        //0 2 5 6
        /* 0 0 - 2
        0 1 - 5
        1 2 - 4*/
        return sum;
    }
};