class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int c = -1;
            for(int a =0;a<nums[i];a++){
                if((a|(a+1))==nums[i]){
                    c = a;
                    break;
                }
            }
            nums[i] = c;
        }
        return nums;
    }
};