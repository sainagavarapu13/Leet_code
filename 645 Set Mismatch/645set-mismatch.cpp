class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n+1,0);
        int b = 0,a = 0;
        for(int i=0;i<n;i++){
            v[nums[i]]++;
            if(v[nums[i]]>1) b = nums[i];
            a ^=nums[i]^(i+1);
        }
        return {b,a^b};
    }
};