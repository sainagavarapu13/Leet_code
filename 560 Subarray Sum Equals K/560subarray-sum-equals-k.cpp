class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> v(n+1,0);
        for(int i=0;i<n;i++){
            v[i+1] = v[i]+nums[i];
        }
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if((v[j+1]-v[i])==k) res++;
            }
        }
        return res;
    }
};