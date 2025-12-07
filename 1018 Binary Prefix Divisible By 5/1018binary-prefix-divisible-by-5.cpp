class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        long long a = 0;
        vector<bool> v;
        for(int i=0;i<nums.size();i++){
            a = ((a<<1) + nums[i])%5;
            v.push_back(a==0);
        }
        return v;
    }
};