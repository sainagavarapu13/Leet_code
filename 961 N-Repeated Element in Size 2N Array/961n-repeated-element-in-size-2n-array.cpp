class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        vector<int> v(100004,0);
        for(int i=0;i<nums.size();i++){
            if(v[nums[i]]==1){
                return nums[i];
            }
            v[nums[i]]++;
        }
        return 0;
    }
};