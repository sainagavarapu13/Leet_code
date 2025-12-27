class Solution {
public:
    int triangularSum(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        vector<int> v;
        int n =nums.size()-1;
        for(int i=0;i<n;i++){
            v.push_back((nums[i]+nums[i+1])%10);
        }
        int a = triangularSum(v);
        return a;
    }
};