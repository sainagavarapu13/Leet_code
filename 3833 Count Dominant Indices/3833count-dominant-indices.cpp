class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n = nums.size(),res = 0;
        long long sum = 0;
        vector<int> v(n);
        for(int i=n-1;i>=0;i--){
            sum += nums[i];
            v[i] = sum;
        }
        for(int i=0;i<n-1;i++){
            float d = v[i+1]/((n-i-1)*1.0);
            float e = nums[i]*1.0;
            //cout<<v[i+1]<<" "<<(n-i-1)<<d<<e<<endl;
            if(nums[i]>d){
                res++;
            }
        }
        return res;
    }
};