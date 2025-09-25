class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        map<int,int> m;
        for(int i=1;i<nums.size();i++){
            int a = nums[i-1] + nums[i];
            m[a]++;
            if(m[a]>=2) return true;
        }
        return false;
    }
};