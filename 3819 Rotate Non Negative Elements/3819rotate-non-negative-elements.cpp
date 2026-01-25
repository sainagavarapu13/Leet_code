class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> pos;
        int a = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0) pos.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                nums[i] = pos[(a+k)%pos.size()];
                a++;
            }
        }
        return nums;
    }
};