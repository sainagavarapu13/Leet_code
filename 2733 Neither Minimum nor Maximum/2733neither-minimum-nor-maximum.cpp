class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<=2) return -1;
        else{
            auto a = max_element(nums.begin(),nums.end());
            auto b = min_element(nums.begin(),nums.end());
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=*a && nums[i]!=*b){
                    return nums[i];
                }
            }
        }
        return -1;
    }
};