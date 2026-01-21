class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int cur = nums[i];
            int nex = nums[i]+1;
            if(cur == 2){
                nums[i] = -1;
            }
            else{
                nums[i] = cur - (nex & -nex)/2;
            }
        }
        return nums;
    }
};